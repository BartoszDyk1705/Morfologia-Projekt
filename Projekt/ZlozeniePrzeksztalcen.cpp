// ZlozeniePrzeksztalcen.cpp
#include "ZlozeniePrzeksztalcen.h"
#include "MyExceptions.h"

void ZlozeniePrzeksztalcen::dodajPrzeksztalcenie(Przeksztalcenie* p) {
    if (!p) throw MyExceptions("Wskaznik na przeksztalcenie nie moze byc null!");
    lista.push_back(p);
}

void ZlozeniePrzeksztalcen::przeksztalc(Bitmapa& b) {
    for (Przeksztalcenie* p : lista) {
        p->przeksztalc(b);
    }
}