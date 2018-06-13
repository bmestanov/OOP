//
// Created by bmestanov on 12.06.18.
//

#include <iostream>
#include "Account.h"

Account::Account(const std::string &iban, unsigned int ownerId, double amount) :
        iban(iban), ownerId(ownerId), amount(amount) {}

void Account::deposit(double amount) {
    this->amount += amount;
}

bool Account::withdraw(double amount) {
    if (this->amount >= amount) {
        this->amount -= amount;
        return true;
    }

    return false;
}

void Account::display() const {
    std::cout << "Account IBAN: " << iban << std::endl;
    std::cout << "Account ownerId: " << ownerId << std::endl;
    std::cout << "Account amount: " << amount << std::endl;
}

double Account::getAmount() const {
    return amount;
}

const std::string &Account::getIban() const {
    return iban;
}

unsigned int Account::getOwnerId() const {
    return ownerId;
}

bool Account::operator==(const Account &rhs) const {
    return iban == rhs.iban;
}
