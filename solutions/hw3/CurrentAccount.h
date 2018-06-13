//
// Created by bmestanov on 12.06.18.
//

#ifndef OOP_CURRENTACCOUNT_H
#define OOP_CURRENTACCOUNT_H


#include "Account.h"

class CurrentAccount : public Account {
public:
    CurrentAccount(const std::string &iban, unsigned int ownerId, double amount);

    void deposit(double amount) override;

    bool withdraw(double amount) override;

    void display() const override;

protected:
    Account *clone() const override;
};


#endif //OOP_CURRENTACCOUNT_H
