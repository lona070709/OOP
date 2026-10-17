#include "Transport.h"
#include <iostream>

void Transport::showInfo() {
    cout << "Name: " << name << ", max speed: " << maxSpeed << " km/h" << endl;
}

void Transport::move() {
    cout << "Transport is moving" << endl;
}