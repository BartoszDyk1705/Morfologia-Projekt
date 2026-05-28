#ifndef BITMAPA_H
#define BITMAPA_H
#include <iostream>

class Bitmapa {
public:
    virtual unsigned length() const = 0;
    virtual unsigned width() const = 0;
    virtual bool& operator() (unsigned x, unsigned y) = 0;
    virtual bool operator() (unsigned x, unsigned y) const = 0;
    virtual ~Bitmapa() {}
};

// Globalny operator wypisywania dla abstrakcyjnej Bitmapy
inline std::ostream& operator<<(std::ostream& os, const Bitmapa& b) {
    for (unsigned y = 0; y < b.width(); ++y) {
        for (unsigned x = 0; x < b.length(); ++x) {
            os << (b(x, y) ? "1 " : "0 ");
        }
        os << "\n";
    }
    return os;
}
#endif