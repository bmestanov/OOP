//
// Created by bmestanov on 08.05.18.
//

#ifndef OOP_CIRCLE_H
#define OOP_CIRCLE_H

class Circle : public Shape {
public:

    Circle();

    Circle(const char *color, double radius);

    Circle(const Circle &);

    Circle &operator=(const Circle &);

    ~Circle() = default; // Empty destructor

    double getArea() const override;

private:
    double r;
};

#endif //OOP_CIRCLE_H
