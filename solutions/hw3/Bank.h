//
// Created by bmestanov on 12.06.18.
//

#ifndef OOP_BANK_H
#define OOP_BANK_H

#include <vector>
#include <string>
#include "Account.h"
#include "Customer.h"

class Bank {
public:
    Bank(const std::string &name, const std::string &address);

    Bank(const Bank &);

    Bank &operator=(const Bank &);

    ~Bank();

    const std::string &getName() const;

    const std::string &getAddress() const;

    bool addCustomer(unsigned ownerId, const std::string &name, const std::string &address);

    bool deleteCustomer(unsigned customerId);

    void listCustomers() const;

    bool addAccount(AccountType type, unsigned ownerId, const std::string &iban, double amount);

    bool deleteAccount(const std::string &iban);

    void listAccounts() const;

    void listCustomerAccounts(unsigned ownerId) const;

    bool transfer(const std::string &fromIban, const std::string &toIban, double amount);

    void display() const;

    unsigned long accountsCount() const;

    unsigned long customersCount() const;

private:
    int findCustomerIndex(unsigned ownerId) const;

    int findAccountOf(unsigned ownerId) const;

    int findAccountIndex(const std::string &iban) const;

    void destroyAccount(int index);

    void destroyAllAccounts();

    void copyAccounts(const std::vector<Account *> &);

    std::string name;
    std::string address;
    std::vector<Account *> accounts;
    std::vector<Customer> customers;
};


#endif //OOP_BANK_H
