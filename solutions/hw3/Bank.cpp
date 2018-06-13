//
// Created by bmestanov on 12.06.18.
//

#include <iostream>
#include "Bank.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"
#include "PrivilegeAccount.h"

Bank::Bank(const std::string &name, const std::string &address) :
        name(name), address(address) {}

const std::string &Bank::getName() const {
    return name;
}

const std::string &Bank::getAddress() const {
    return address;
}

Bank::Bank(const Bank &other) :
        name(other.name), address(other.address),
        customers(other.customers) {
    copyAccounts(other.accounts);
}

Bank &Bank::operator=(const Bank &other) {
    name = other.name;
    address = other.address;
    customers = other.customers;
    destroyAllAccounts();
    copyAccounts(other.accounts);
}

Bank::~Bank() {
    destroyAllAccounts();
}

bool Bank::addCustomer(unsigned ownerId, const std::string &name, const std::string &address) {
    if (findCustomerIndex(ownerId) < 0) {
        customers.push_back(Customer(ownerId, name, address));
        return true;
    }

    return false;
}

void Bank::listCustomers() const {
    for (int i = 0; i < customers.size(); i++) {
        customers[i].display();
    }
}

bool Bank::addAccount(AccountType type, unsigned ownerId, const std::string &iban, double amount) {
    if (findCustomerIndex(ownerId) < 0 || findAccountIndex(iban) >= 0) {
        std::cerr << "Error adding account";
        return false;
    }

    if (type == current) {
        accounts.push_back(new CurrentAccount(iban, ownerId, amount));
    } else if (type == savings) {
        double interestRate;
        std::cout << "Enter interest rate> ";
        std::cin >> interestRate;
        accounts.push_back(new SavingsAccount(iban, ownerId, amount, interestRate));
    } else {
        double overdraft;
        std::cout << "Enter overdraft> ";
        std::cin >> overdraft;
        accounts.push_back(new PrivilegeAccount(iban, ownerId, amount, overdraft));
    }
    return true;
}

bool Bank::deleteAccount(const std::string &iban) {
    int idx = findAccountIndex(iban);
    if (idx >= 0) {
        destroyAccount(idx);
        return true;
    }

    return false;
}

bool Bank::deleteCustomer(unsigned customerId) {
    int customerIndex = findCustomerIndex(customerId);
    if (customerIndex >= 0) {
        int accountIdx;
        while ((accountIdx = findAccountOf(customerId)) >= 0) {
            destroyAccount(accountIdx);
        }

        customers.erase(customers.begin() + customerIndex);
        return true;
    }

    return false;
}

void Bank::listAccounts() const {
    for (int i = 0; i < accounts.size(); i++) {
        accounts[i]->display();
    }
}

void Bank::listCustomerAccounts(unsigned ownerId) const {
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i]->getOwnerId() == ownerId) {
            accounts[i]->display();
        }
    }
}

bool Bank::transfer(const std::string &fromIban, const std::string &toIban, double amount) {
    int fromIdx = findAccountIndex(fromIban);
    int toIdx = findAccountIndex(toIban);
    if (fromIdx >= 0 && toIdx >= 0 && accounts[fromIdx]->withdraw(amount)) {
        accounts[toIdx]->deposit(amount);
        return true;
    }

    return false;
}

void Bank::display() const {
    std::cout << "Bank name: " << name << std::endl;
    std::cout << "Bank address: " << address << std::endl;
    std::cout << "Bank customers: " << customers.size() << std::endl;
    std::cout << "Bank accounts: " << accounts.size() << std::endl;
}

unsigned long Bank::accountsCount() const {
    return accounts.size();
}

unsigned long Bank::customersCount() const {
    return customers.size();
}

void Bank::destroyAccount(int index) {
    delete accounts[index];
    accounts.erase(accounts.begin() + index);
}

void Bank::destroyAllAccounts() {
    for (int i = 0; i < accounts.size(); i++) {
        delete accounts[i];
    }

    accounts.clear();
}

int Bank::findCustomerIndex(unsigned ownerId) const {
    for (int i = 0; i < customers.size(); i++) {
        if (customers[i].getId() == ownerId) {
            return i;
        }
    }

    return -1;
}

int Bank::findAccountIndex(const std::string &iban) const {
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i]->getIban() == iban) {
            return i;
        }
    }

    return -1;
}

int Bank::findAccountOf(unsigned ownerId) const {
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i]->getOwnerId() == ownerId) {
            return i;
        }
    }

    return -1;
}

void Bank::copyAccounts(const std::vector<Account *> &otherAccounts) {
    for (int i = 0; i < otherAccounts.size(); i++) {
        accounts.push_back(otherAccounts[i]->clone());
    }
}
