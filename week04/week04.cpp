//
// Created by bmestanov on 11.03.18.
//

#include <iostream>
#include "Tuple.h"

// Example 1 ----------------
class Lamp {
public:
    Lamp();

    Lamp(const Lamp &);

    unsigned int getWatts() const;

    void setWatts(unsigned int);

private:
    unsigned int watts;
};

Lamp::Lamp() {
    this->watts = 45;
}

Lamp::Lamp(const Lamp &other) {
    std::cout << "Lamp copy constructor called" << std::endl;
    this->watts = other.watts;
}

unsigned int Lamp::getWatts() const {
    return watts;
}

void Lamp::setWatts(unsigned int watts) {
    this->watts = watts;
}

// ---------------------------------------

void passByValueExample(Lamp lamp) {
    std::cout << "Lamp passed by value. Address is: " << &lamp << std::endl;
    lamp.setWatts(60);
}

void passByReferenceExample(Lamp &lamp) {
    std::cout << "Lamp passed by reference. Address is: " << &lamp << std::endl;
    lamp.setWatts(70);
}

void example01() {
    Lamp c = Lamp();
    std::cout << "EX1> Address of original object is: " << &c << std::endl;

    Lamp &d = c;
    std::cout << "EX1> Address of reference object is: " << &d << std::endl;

    std::cout << "EX1> Watts (c) is: " << c.getWatts() << std::endl;

    passByValueExample(c);
    std::cout << "EX1> Watts (c) is: " << c.getWatts() << std::endl;

    passByReferenceExample(c);
    std::cout << "EX1> Watts (c) is: " << c.getWatts() << std::endl;
}

int main04() {
    example01();
    return 0;
}