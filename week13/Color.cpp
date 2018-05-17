//
// Created by bmestanov on 15.05.18.
//

#include <iostream>
#include "Color.h"

Color::Color(double red, double green, double blue) :
        red(red), green(green), blue(blue) {
    std::cout << "Constructing color at address " << (long) this << std::endl;
}

Color::Color(const Color &other) :
        red(other.red), green(other.green), blue(other.blue) {
    std::cout << "Copy-constructing color at address " << (long) this << std::endl;
}

Color::~Color() {
    std::cout << "Destructing color at address " << (long) this << std::endl;
}
