#ifndef OOP1_TRANSPORT_H
#define OOP1_TRANSPORT_H

#include <string>
using namespace std;

class Transport {
public:
    string name;
    int maxSpeed;

    void showInfo();
    virtual void move();
};
#endif //OOP1_TRANSPORT_H
