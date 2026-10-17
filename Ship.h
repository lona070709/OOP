#ifndef OOP1_SHIP_H
#define OOP1_SHIP_H
#include "Transport.h"

class Ship : public Transport {
public:
    int draft;

    void move() override;
};
#endif //OOP1_SHIP_H
