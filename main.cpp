#include <iostream>
#include "Transport.h"
#include "Car.h"
#include "Airplane.h"
#include "Ship.h"

int main() {
    Car car;
    car.name = "Toyota Camry";
    car.maxSpeed = 210;
    car.doors = 4;

    Airplane plane;
    plane.name = "Boeing 737";
    plane.maxSpeed = 850;
    plane.wingspan = 35;

    Ship ship;
    ship.name = "Titanic";
    ship.maxSpeed = 40;
    ship.draft = 10;

    Transport* t;

    t = &car;
    t->showInfo();
    t->move();
    std::cout << std::endl;

    t = &plane;
    t->showInfo();
    t->move();
    std::cout << std::endl;

    t = &ship;
    t->showInfo();
    t->move();

    return 0;
}