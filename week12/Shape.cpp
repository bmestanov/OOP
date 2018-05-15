//
// Created by bmestanov on 08.05.18.
//

#include <cstring>
#include "Shape.h"

Shape::Shape() : color(nullptr) {
}

Shape::Shape(const char *color) {
    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);
}

Shape::Shape(const Shape &other) {
    this->color = new char[strlen(other.color) + 1];
    strcpy(this->color, other.color);
}

Shape &Shape::operator=(const Shape &other) {
    if (this != &other) {
        delete[] color;
        this->color = new char[strlen(other.color) + 1];
        strcpy(this->color, other.color);
    }

    return *this;
}

Shape::~Shape() {
    delete[] color;
}

const char *Shape::getColor() const {
    return color;
}

void Shape::setColor(const char *color) {
    if (strlen(this->color) < strlen(color)) {
        // Need to allocate more space only if needed
        delete[] this->color;
        this->color = new char[strlen(color) + 1];
    }

    strcpy(this->color, color);
}
