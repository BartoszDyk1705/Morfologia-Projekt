// Usrednianie.cpp
#include "Usrednianie.h"
#include <vector>
#include <utility>

void Usrednianie::przeksztalc(Bitmapa& b) {
    std::vector<std::pair<unsigned, unsigned>> zrob_czarne;
    std::vector<std::pair<unsigned, unsigned>> zrob_biale;

    for (unsigned y = 0; y < b.width(); ++y) {
        for (unsigned x = 0; x < b.length(); ++x) {
            int czarne = 0, biale = 0;

            if (y > 0) { b(x, y - 1) ? czarne++ : biale++; }
            if (y < b.width() - 1) { b(x, y + 1) ? czarne++ : biale++; }
            if (x > 0) { b(x - 1, y) ? czarne++ : biale++; }
            if (x < b.length() - 1) { b(x + 1, y) ? czarne++ : biale++; }

            if (czarne > 2) zrob_czarne.push_back({x, y});
            if (biale > 2) zrob_biale.push_back({x, y});
        }
    }

    for (auto& p : zrob_czarne) b(p.first, p.second) = true;
    for (auto& p : zrob_biale) b(p.first, p.second) = false;
}