//
// Created by bmestanov on 07.05.18.
//

#include <iostream>
#include <cstring>
#include <cassert>
#include <cmath>
#include "../week10/Person.h"
#include "../week10/Professor.h"
#include "TaxiDriver.h"
#include "Triangle.h"
#include "Circle.h"

/*
 * Simple function to demonstrate the polymorphic class Shape -
 * returns sum of areas of the shapes in the array
 */
double sumOfAreas(const Shape **shapes, size_t size) {
    double sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += shapes[i]->getArea();
    }

    return sum;
}

int main12() {
    Triangle t1("green", 3, 4, 5);
    assert(t1.getArea() == 6);

    Circle c1("red", 1);
    c1.setColor("purple");
    assert(c1.getArea() == M_PI);

    const Shape *shapes[] = {&t1, &c1};
    assert(t1.getArea() + c1.getArea() == sumOfAreas(shapes, 2));
    return 0;
}