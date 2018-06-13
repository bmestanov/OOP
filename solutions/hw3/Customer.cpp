//
// Created by bmestanov on 12.06.18.
//

#include <iostream>
#include "Customer.h"


Customer::Customer(unsigned id, const std::string &name, const std::string &address) :
        id(id), name(name), address(address) {}

unsigned int Customer::getId() const {
    return id;
}

const std::string &Customer::getName() const {
    return name;
}

void Customer::setName(const std::string &name) {
    this->name = name;
}

const std::string &Customer::getAddress() const {
    return address;
}

void Customer::setAddress(const std::string &address) {
    this->address = address;
}

void Customer::display() const {
    std::cout << id << " " << name << " " << address;
}
