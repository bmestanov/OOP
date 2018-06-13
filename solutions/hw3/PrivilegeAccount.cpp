//
// Created by bmestanov on 12.06.18.
//

#include <iostream>
#include "PrivilegeAccount.h"

PrivilegeAccount::PrivilegeAccount(const std::string &iban, unsigned int ownerId, double amount, double overdraft)
        : Account(iban, ownerId, amount), overdraft(overdraft) {}

double PrivilegeAccount::getOverdraft() const {
    return overdraft;
}

void PrivilegeAccount::setOverdraft(double overdraft) {
    this->overdraft = overdraft;
}

void PrivilegeAccount::deposit(double amount) {
    Account::deposit(amount);
}

bool PrivilegeAccount::withdraw(double amount) {
    if (this->amount + overdraft >= amount) {
        this->amount -= amount;
        return true;
    }

    return false;
}

void PrivilegeAccount::display() const {
    std::cout << "Account type: Privilege" << std::endl;
    Account::display();
}

Account *PrivilegeAccount::clone() const {
    return new PrivilegeAccount(*this);
}
