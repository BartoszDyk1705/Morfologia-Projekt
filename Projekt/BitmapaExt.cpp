#include "BitmapaExt.h"

BitmapaExt::BitmapaExt(unsigned length, unsigned width)
    : len(length), wid(width), piksele(length, width) {}

unsigned BitmapaExt::length() const { return len; }
unsigned BitmapaExt::width() const { return wid; }

bool& BitmapaExt::operator()(unsigned x, unsigned y) {
    if (x >= len || y >= wid) throw MyExceptions("Indeks x lub y poza zakresem!");
    return piksele(x, y);
}

bool BitmapaExt::operator()(unsigned x, unsigned y) const {
    if (x >= len || y >= wid) throw MyExceptions("Indeks x lub y poza zakresem!");
    return piksele(x, y);
}

BitmapaExt::~BitmapaExt() {}