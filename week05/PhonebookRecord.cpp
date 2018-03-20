//
// Created by bmestanov on 20.03.18.
//

#include <cstring>
#include "PhonebookRecord.h"

PhonebookRecord::PhonebookRecord(const char *name, const char *phoneNumber, PhoneType type) {
    std::strcpy(this->name, name);
    std::strcpy(this->phoneNumber, phoneNumber);
    this->type = type;
}

PhonebookRecord::PhonebookRecord(const PhonebookRecord &other) {
    std::strcpy(this->name, other.name);
    std::strcpy(this->phoneNumber, other.phoneNumber);
    this->type = other.type;
}

PhonebookRecord &PhonebookRecord::operator=(const PhonebookRecord &other) {
    if (this != &other) {
        std::strcpy(this->name, other.name);
        std::strcpy(this->phoneNumber, other.phoneNumber);
        this->type = other.type;
    }

    return *this;
}

std::ostream &operator<<(std::ostream &os, const PhonebookRecord &record) {
    os << "Name: " << record.name << std::endl;
    os << "Number: " << record.phoneNumber << std::endl;
    os << "Type: " << record.type << std::endl;
    return os;
}