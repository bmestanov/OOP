//
// Created by bmestanov on 15.05.18.
//

#ifndef OOP_TEXTBUTTON_H
#define OOP_TEXTBUTTON_H


#include "Button.h"

class TextButton : public Button {
public:

    TextButton(double x = 0, double y = 0, const Color &color = WHITE, const char *text = "Button");

    TextButton(const TextButton &);

    TextButton &operator=(const TextButton &);

    ~TextButton();

    void draw() const override;

private:
    char *text;
};


#endif //OOP_TEXTBUTTON_H
