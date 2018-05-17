//
// Created by bmestanov on 15.05.18.
//

#include <iostream>
#include "View.h"

View::View(double x, double y, double sizeX, double sizeY) :
        x(x), y(y), sizeX(sizeX), sizeY(sizeY) {
    std::cout << "Constructing view at address " << (long) this << std::endl;
}

View::View(const View &other) :
        x(other.x), y(other.y), sizeX(other.sizeX), sizeY(other.sizeY) {
    std::cout << "Constructing view at address " << (long) this << std::endl;
}

View &View::operator=(const View &other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
        sizeX = other.sizeX;
        sizeY = other.sizeY;
    }

    return *this;
}

View::~View() {
    std::cout << "Destructing view at address " << (long) this << std::endl;
}

double View::getX() const {
    return x;
}

double View::getY() const {
    return y;
}

double View::getSizeX() const {
    return sizeX;
}

double View::getSizeY() const {
    return sizeY;
}

void View::draw() const {
    std::cout << "Drawing view at address " << (long) this << std::endl;
}

