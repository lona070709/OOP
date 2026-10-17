#include "Transport.h"
#include <iostream>

void Transport::showInfo() {
    std::cout << "Name: " << name << ", max speed: " << maxSpeed << " km/h" << std::endl;
}

void Transport::move() {
    std::cout << "Transport is moving" << std::endl;
}