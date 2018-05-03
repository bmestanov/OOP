//
// Created by bmestanov on 24.04.18.
//

#include "Professor.h"

Professor::Professor(const char *name, unsigned int age, unsigned int papers) :
        Person(name, age) {
    std::cout << "Professor constructor called" << std::endl;
    this->age;
    this->papers = papers;
}

Professor::Professor(const Professor &other) : Person(other) {
    this->papers = other.papers;
}

Professor &Professor::operator=(const Professor &other) {
    if (this != &other) {
        Person::operator=(other);
        this->papers = other.papers;
    }

    return *this;
}

Professor::~Professor() {
    std::cout << "Professor destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Professor &p) {
    // Cast to reference to avoid copying
    os << (Person &) p << ", " << p.papers;
    return os;
}