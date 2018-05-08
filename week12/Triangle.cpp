//
// Created by bmestanov on 08.05.18.
//

#include <cmath>
#include "Triangle.h"

Triangle::Triangle() : a(0), b(0), c(0) {
}

Triangle::Triangle(const char *color, double a, double b, double c) : Shape(color) {
    this->a = a;
    this->b = b;
    this->c = c;
}

Triangle::Triangle(const Triangle &other) : Shape(other) {
    this->a = other.a;
    this->b = other.b;
    this->c = other.c;
}

Triangle &Triangle::operator=(const Triangle &other) {
    if (this != &other) {
        Shape::operator=(other);
        this->a = other.a;
        this->b = other.b;
        this->c = other.c;
    }

    return *this;
}

double Triangle::getArea() const {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
