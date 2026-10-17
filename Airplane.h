#ifndef OOP1_AIRPLANE_H
#define OOP1_AIRPLANE_H
#include "Transport.h"

class Airplane : public Transport {
public:
    int wingspan;

    void move() override;
};
#endif //OOP1_AIRPLANE_H
