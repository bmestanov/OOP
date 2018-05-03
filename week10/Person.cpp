//
// Created by bmestanov on 24.04.18.
//

#include <cstring>
#include <iostream>
#include "Person.h"

Person::Person(const char *name, unsigned int age) {
    std::cout << "Person constructor called" << std::endl;
    strcpy(this->name, name);
    this->age = age;
}

Person::Person(const Person &other) {
    std::cout << "Person copy constructor called" << std::endl;
    strcpy(this->name, other.name);
    this->age = other.age;
}

Person &Person::operator=(const Person &other) {
    if (this != &other) {
        strcpy(this->name, other.name);
        this->age = other.age;
    }

    return *this;
}

Person::~Person() {
    std::cout << "Person destructor called" << std::endl;
}

unsigned int Person::getAge() const {
    return age;
}

void Person::setAge(unsigned int age) {
    this->age = age;
}

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ", " << p.age;
    return os;
}

const char *Person::getName() const {
    return name;
}

void Person::setName(const char *name) {
    strcpy(this->name, name);
}