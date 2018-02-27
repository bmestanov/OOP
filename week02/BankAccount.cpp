//
// Created by bmestanov on 27.02.18.
//

#include <cstring>
#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount() {
    this->balance = 0;
}

BankAccount::BankAccount(const char *holderName, int accountId, double balance) {
    std::strcpy(this->holderName, holderName);
    this->accountId = accountId;
    this->balance = balance;
}

const char *BankAccount::getHolderName() const {
    // You can use 'this' every time you refer to a member variable
    return this->holderName;
}

int BankAccount::getAccountId() const {
    // Here the 'this' is implied
    return accountId;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::setHolderName(const char *holderName) {
    std::strcpy(this->holderName, holderName);
}

void BankAccount::setAccountId(int accountId) {
    this->accountId = accountId;
}

void BankAccount::setBalance(double balance) {
    this->balance = balance;
}

void BankAccount::withdraw(double amount) {
    balance -= amount;
}

void BankAccount::deposit(double amount) {
    balance += amount;
}

void BankAccount::initialize() {
    // Prefer using getters & setters in member functions
    // Here the 'this' is implied also
    setBalance(0); // same as this->setBalance(0);

    // You can also do
    // balance = 0;
    // this->balance = 0;
}

void BankAccount::print() const {
    std::cout << "Bank account: " << getAccountId() << std::endl;
    std::cout << "Holder name: " << getHolderName() << std::endl;
    std::cout << "Balance: " << getBalance() << std::endl;
}
