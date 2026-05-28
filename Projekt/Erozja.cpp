// Erozja.cpp
#include "Erozja.h"
#include <vector>
#include <utility>

void Erozja::przeksztalc(Bitmapa& b) {
    std::vector<std::pair<unsigned, unsigned>> do_usuniecia;
    for (unsigned y = 0; y < b.width(); ++y) {
        for (unsigned x = 0; x < b.length(); ++x) {
            if (b(x, y)) { // jeśli czarny
                bool sasiadujeZBialym = false;
                if (y > 0 && !b(x, y - 1)) sasiadujeZBialym = true;
                if (y < b.width() - 1 && !b(x, y + 1)) sasiadujeZBialym = true;
                if (x > 0 && !b(x - 1, y)) sasiadujeZBialym = true;
                if (x < b.length() - 1 && !b(x + 1, y)) sasiadujeZBialym = true;

                if (sasiadujeZBialym) do_usuniecia.push_back({x, y});
            }
        }
    }
    for (auto& p : do_usuniecia) b(p.first, p.second) = false;
}