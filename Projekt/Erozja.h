// Erozja.h
#ifndef EROZJA_H
#define EROZJA_H
#include "Przeksztalcenie.h"

class Erozja : public Przeksztalcenie {
public:
    void przeksztalc(Bitmapa& b) override;
};
#endif