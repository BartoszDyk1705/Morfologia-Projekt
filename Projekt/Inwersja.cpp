// Inwersja.cpp
#include "Inwersja.h"

void Inwersja::przeksztalc(Bitmapa& b) {
    for (unsigned y = 0; y < b.width(); ++y) {
        for (unsigned x = 0; x < b.length(); ++x) {
            b(x, y) = !b(x, y);
        }
    }
}