//
// Created by bmestanov on 15.05.18.
//

#include <cstring>
#include <iostream>
#include "TextButton.h"

TextButton::TextButton(double x, double y, const Color &color, const char *text) :
        Button(x, y, color) {
    std::cout << "Constructing text-button at address " << (long) this << std::endl;
    this->text = new char[strlen(text) + 1];
    strcpy(this->text, text);
}

TextButton::TextButton(const TextButton &other) : Button(other) {
    std::cout << "Copy-constructing text-button at address " << (long) this << std::endl;
    this->text = new char[sizeof(other.text)];
    strcpy(this->text, other.text);
}

TextButton &TextButton::operator=(const TextButton &other) {
    if (this != &other) {
        Button::operator=(other);
        delete[] this->text;
        this->text = new char[sizeof(other.text)];
        strcpy(this->text, other.text);
    }

    return *this;
}

TextButton::~TextButton() {
    std::cout << "Destructing text-button at address " << (long) this << std::endl;
    delete[] this->text;
}

void TextButton::draw() const {
    Button::draw();
    std::cout << "Drawing text-button at address " << (long) this << std::endl;
}

