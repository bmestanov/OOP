//
// Created by bmestanov on 15.05.18.
//

#include <iostream>
#include "Button.h"

const double Button::SIZE_X = 250;
const double Button::SIZE_Y = 100;

// Using reference to color to avoid unnecessary copying -
// if we were to use argument by value this would first copy color to the next stack frame
// then copy it to the member in line 15
Button::Button(double x, double y, const Color &color) :
        View(x, y, Button::SIZE_X, Button::SIZE_Y), color(color) // Copy constructor of color is called
{
    std::cout << "Constructing button at address " << (long) this << std::endl;
}

Button::Button(const Button &other) : View(other), color(other.color) {
    std::cout << "Copy-constructing button at address " << (long) this << std::endl;
}

Button &Button::operator=(const Button &other) {
    if (this != &other) {
        View::operator=(other);
        color = other.color;
    }

    return *this;
}

Button::~Button() {
    std::cout << "Destructing button at address " << (long) this << std::endl;
}

void Button::draw() const {
    View::draw();
    std::cout << "Drawing button at address " << (long) this << std::endl;
}


