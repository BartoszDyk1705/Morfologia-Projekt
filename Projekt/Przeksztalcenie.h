#ifndef PRZEKSZTALCENIE_H
#define PRZEKSZTALCENIE_H
#include "Bitmapa.h"

class Przeksztalcenie {
public:
    virtual void przeksztalc(Bitmapa&) = 0;
    virtual ~Przeksztalcenie() {}
};
#endif