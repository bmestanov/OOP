//
// Created by bmestanov on 22.04.18.
//

#include <cstddef>
#include <vector>
#include <iostream>
#include "Person.h"
#include "Professor.h"

// Static members example
class Car {
public:
    Car();

    Car(unsigned int model);

    ~Car();

    static unsigned getCarsCount();

private:
    unsigned model;

    static unsigned carsCount;
};

unsigned Car::carsCount = 0;

Car::Car() {
    Car::carsCount++;
}

Car::Car(unsigned int model) : model(model) {
    Car::carsCount++;
}

Car::~Car() {
    Car::carsCount--;
}

unsigned Car::getCarsCount() {
    return carsCount;
}


int main10() {
    Car car1, car2, car3;
    std::cout << Car::getCarsCount() << std::endl;

    {
        Car car4;
        std::cout << Car::getCarsCount() << std::endl;
    }

    std::cout << Car::getCarsCount() << std::endl;


    Person person("Richard", 32);
    std::cout << person << std::endl;

    Professor professor("David", 33, 100);
    std::cout << professor << std::endl;

    return 0;
}