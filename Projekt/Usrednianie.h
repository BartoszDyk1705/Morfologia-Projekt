// Usrednianie.h
#ifndef USREDNIANIE_H
#define USREDNIANIE_H
#include "Przeksztalcenie.h"

class Usrednianie : public Przeksztalcenie {
public:
    void przeksztalc(Bitmapa& b) override;
};
#endif