//
// Created by bmestanov on 11.03.18.
//

#include <iostream>
#include "Tuple.h"

Tuple::Tuple() {
    this->first = 0;
    this->second = 0;
}

Tuple::Tuple(int first, int second) {
    this->first = first;
    this->second = second;
}

Tuple::Tuple(const Tuple &other) {
    this->first = other.first;
    this->second = other.second;
}

Tuple &Tuple::operator=(const Tuple &other) {
    this->first = other.first;
    this->second = other.second;
}

int Tuple::getFirst() const {
    return first;
}

void Tuple::setFirst(int first) {
    this->first = first;
}

int Tuple::getSecond() const {
    return second;
}

void Tuple::setSecond(int second) {
    this->second = second;
}

void Tuple::print() const {
    std::cout << "[" << first << ", " << second << "]" << std::endl;
}

int Tuple::sum() const {
    return first + second;
}

double Tuple::average() const {
    // if (second == 0) ...
    return ((double) first) / second;
}

void Tuple::incrementBy(const Tuple &other) {
    this->first += other.first;
    this->second += other.second;
}

void Tuple::multiplyBy(const Tuple &other) {
    this->first *= other.first;
    this->second *= other.second;
}

void Tuple::multiplyBy(int scalar) {
    this->first *= scalar;
    this->second *= scalar;
}
