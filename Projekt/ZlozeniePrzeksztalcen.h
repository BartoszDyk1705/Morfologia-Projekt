// ZlozeniePrzeksztalcen.h
#ifndef ZLOZENIEPRZEKSZTALCEN_H
#define ZLOZENIEPRZEKSZTALCEN_H
#include "Przeksztalcenie.h"
#include <vector>

class ZlozeniePrzeksztalcen : public Przeksztalcenie {
    std::vector<Przeksztalcenie*> lista;
public:
    void dodajPrzeksztalcenie(Przeksztalcenie* p);
    void przeksztalc(Bitmapa& b) override;
};
#endif