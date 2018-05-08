//
// Created by bmestanov on 08.05.18.
//

#ifndef OOP_SHAPE_H
#define OOP_SHAPE_H

// Example for abstract class
class Shape {
public:

    Shape();

    Shape(const char *color);

    Shape(const Shape &);

    Shape &operator=(const Shape &);

    virtual ~Shape();

    const char *getColor() const;

    void setColor(const char *color);

    // All classes that derive from Shape must give definition for this function
    virtual double getArea() const = 0;

protected:
    char *color;
};


#endif //OOP_SHAPE_H
