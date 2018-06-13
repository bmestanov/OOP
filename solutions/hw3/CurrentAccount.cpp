//
// Created by bmestanov on 12.06.18.
//

#include <iostream>
#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(const std::string &iban, unsigned int ownerId, double amount) :
        Account(iban, ownerId, amount) {}

void CurrentAccount::deposit(double amount) {
    Account::deposit(amount);
}

bool CurrentAccount::withdraw(double amount) {
    return Account::withdraw(amount);
}

void CurrentAccount::display() const {
    std::cout << "Account type: Current" << std::endl;
    Account::display();
}

Account *CurrentAccount::clone() const {
    return new CurrentAccount(*this);
}
