//
// Created by bmestanov on 15.05.18.
//

#ifndef OOP_COLOR_H
#define OOP_COLOR_H


class Color {
public:
    double red;
    double green;
    double blue;

    Color(double red, double green, double blue);

    Color(const Color &);

    ~Color();
};


#endif //OOP_COLOR_H
