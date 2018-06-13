//
// Created by bmestanov on 12.06.18.
//

#include <iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(const std::string &iban, unsigned int ownerId, double amount, double interestRate)
        : Account(iban, ownerId, amount), interestRate(interestRate) {}

double SavingsAccount::getInterestRate() const {
    return interestRate;
}

void SavingsAccount::setInterestRate(double interestRate) {
    this->interestRate = interestRate;
}

void SavingsAccount::deposit(double amount) {
    Account::deposit(amount);
}

bool SavingsAccount::withdraw(double amount) {
    return Account::withdraw(amount);
}

void SavingsAccount::display() const {
    std::cout << "Account type: Savings" << std::endl;
    Account::display();
}

Account *SavingsAccount::clone() const {
    return new SavingsAccount(*this);
}
