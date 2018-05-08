//
// Created by bmestanov on 08.05.18.
//

#ifndef OOP_TRIANGLE_H
#define OOP_TRIANGLE_H


#include "Shape.h"

class Triangle : public Shape {
public:

    Triangle();

    Triangle(const char *color, double a, double b, double c);

    Triangle(const Triangle &);

    Triangle &operator=(const Triangle &);

    ~Triangle() = default;

    double getArea() const override;

private:
    double a, b, c;
};


#endif //OOP_TRIANGLE_H
