#ifndef OOP1_CAR_H
#define OOP1_CAR_H
#include "Transport.h"

class Car : public Transport {
public:
    int doors;

    void move() override;
};
#endif //OOP1_CAR_H
