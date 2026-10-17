#ifndef CAR_H
#define CAR_H

#include "Transport.h"

class Car : public Transport {
public:
    int doors;

    void move() override;
};

#endif