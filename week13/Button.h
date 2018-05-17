//
// Created by bmestanov on 15.05.18.
//

#ifndef OOP_BUTTON_H
#define OOP_BUTTON_H

#include "Color.h"
#include "View.h"

// Tell the compiler to replace WHITE with Color(1, 1, 1) wherever is used
#define WHITE Color(1,1,1)

class Button : public View {
public:

    static const double SIZE_X;
    static const double SIZE_Y;

    Button(double x = 0, double y = 0, const Color &color = WHITE);

    Button(const Button &);

    Button &operator=(const Button &);

    virtual ~Button();

    void draw() const override;

private:
    Color color;
};

#endif //OOP_BUTTON_H
