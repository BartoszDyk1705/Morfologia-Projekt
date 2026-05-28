// Dylatacja.cpp
#include "Dylatacja.h"
#include <vector>
#include <utility>

void Dylatacja::przeksztalc(Bitmapa& b) {
    std::vector<std::pair<unsigned, unsigned>> do_dodania;
    for (unsigned y = 0; y < b.width(); ++y) {
        for (unsigned x = 0; x < b.length(); ++x) {
            if (!b(x, y)) { // jeśli biały
                bool sasiadujeZCzarnym = false;
                if (y > 0 && b(x, y - 1)) sasiadujeZCzarnym = true;
                if (y < b.width() - 1 && b(x, y + 1)) sasiadujeZCzarnym = true;
                if (x > 0 && b(x - 1, y)) sasiadujeZCzarnym = true;
                if (x < b.length() - 1 && b(x + 1, y)) sasiadujeZCzarnym = true;

                if (sasiadujeZCzarnym) do_dodania.push_back({x, y});
            }
        }
    }
    for (auto& p : do_dodania) b(p.first, p.second) = true;
}