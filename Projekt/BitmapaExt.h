#ifndef BITMAPAEXT_H
#define BITMAPAEXT_H
#include "Bitmapa.h"
#include "MyExceptions.h"

// Szablon zarządzający pamięcią - spełnia wymóg użycia szablonu klasy w punktach 2-4
template <typename T>
class Tablica2D {
    T* data;
    unsigned w, h;
public:
    Tablica2D(unsigned width, unsigned height) : w(width), h(height) {
        if (w == 0 || h == 0) throw MyExceptions("Wymiary musza byc wieksze od 0.");
        data = new T[w * h](); // Wymóg poprawnego zarządzania pamięcią
    }
    ~Tablica2D() { delete[] data; }

    // Zablokowanie kopiowania dla uproszczenia (Rule of 3)
    Tablica2D(const Tablica2D&) = delete;
    Tablica2D& operator=(const Tablica2D&) = delete;

    T& operator()(unsigned x, unsigned y) { return data[y * w + x]; }
    const T& operator()(unsigned x, unsigned y) const { return data[y * w + x]; }
};

class BitmapaExt : public Bitmapa {
    unsigned len, wid;
    Tablica2D<bool> piksele;
public:
    BitmapaExt(unsigned length, unsigned width);
    unsigned length() const override;
    unsigned width() const override;
    bool& operator()(unsigned x, unsigned y) override;
    bool operator()(unsigned x, unsigned y) const override;
    ~BitmapaExt() override;
};
#endif