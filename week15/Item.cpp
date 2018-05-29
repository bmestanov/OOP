//
// Created by bmestanov on 28.05.18.
//

#include <cassert>
#include <iostream>
#include "Item.h"

int Item::ID_COUNTER = 0;

Item::Item(const char *name) : id(ID_COUNTER++) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Item::~Item() {
    delete[] name;
}

std::ostream &operator<<(std::ostream &os, const Item &a) {
    os << a.id << std::endl;
    os << a.name << std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, Item &a) {
    is >> a.id;
    is.get(); // Consume the '\n'
    size_t capacity = 20, size = 0;
    char *b1 = new char[capacity]{'\0'};
    char b2;
    while ((b2 = is.get()) != '\n') {
        b1[size++] = b2;
        if (size == capacity) {
            capacity *= 2;
            char *p = new char[capacity]{'\0'};
            for (size_t i = 0; i < size; i++) {
                p[i] = b1[i];
            }

            delete[] b1;
            b1 = p;
        }
    }

    delete[] a.name;
    a.name = b1;
    return is;
}

std::ifstream &operator>>(std::ifstream &is, Item &a) {
    is >> a.id;
    is.get(); // Get the '\n' after id

    long pos = is.tellg(); // Remember the old position
    long buffLen = 0;
    while (!is.eof() && is.peek() != '\n') {
        is.get();
        buffLen++; // Count the length of the name
    }

    is.seekg(pos); // Move to the old position
    assert(pos == is.tellg()); // Check

    delete[] a.name; // Remove old content
    a.name = new char[buffLen + 1];
    a.name[buffLen] = '\0';
    is.read(a.name, buffLen); // Read into a.name
    if (!is.eof()) {
        is.get(); // Get '\n' after name
    }

    return is;
}


std::ofstream &operator<<(std::ofstream &os, const Item &a) {
    os << a.id << std::endl;
    os.write(a.name, strlen(a.name));
    os << '\n';
    return os;
}