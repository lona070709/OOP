#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "Transport.h"

class Airplane : public Transport {
public:
    int wingspan;

    void move() override;
};

#endif