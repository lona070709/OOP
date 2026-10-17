#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>

class Transport {
public:
    std::string name;
    int maxSpeed;

    void showInfo();
    virtual void move();
};

#endif