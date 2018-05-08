//
// Created by bmestanov on 08.05.18.
//

#include <cmath>
#include "Shape.h"
#include "Circle.h"

Circle::Circle() : r(0) { // Default constructor for Shape called
}

Circle::Circle(const char *color, double r) : Shape(color) {
    this->r = r;
}

Circle::Circle(const Circle &other) : Shape(other) {
    this->r = other.r;
}

Circle &Circle::operator=(const Circle &other) {
    if (this != &other) {
        Shape::operator=(other);
        this->r = other.r;
    }

    return *this;
}

double Circle::getArea() const {
    return M_PI * r * r;
}
