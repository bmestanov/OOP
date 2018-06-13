//
// Created by bmestanov on 12.06.18.
//

#ifndef OOP_ACCOUNT_H
#define OOP_ACCOUNT_H

#include <string>

class Account {
public:
    Account(const std::string &iban, unsigned int ownerId, double amount);

    virtual ~Account() = default;

    virtual void deposit(double amount) = 0;

    virtual bool withdraw(double amount) = 0;

    virtual void display() const = 0;

    double getAmount() const;

    const std::string &getIban() const;

    unsigned int getOwnerId() const;

    bool operator==(const Account &rhs) const;

protected:
    virtual Account *clone() const = 0;

    friend class Bank;

    std::string iban;
    unsigned ownerId;
    double amount;
};

enum AccountType {
    current, savings, privilege
};


#endif //OOP_ACCOUNT_H
