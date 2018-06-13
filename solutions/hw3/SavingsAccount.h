//
// Created by bmestanov on 12.06.18.
//

#ifndef OOP_SAVINGSACCOUNT_H
#define OOP_SAVINGSACCOUNT_H


#include "Account.h"

class SavingsAccount : public Account {
public:
    SavingsAccount(const std::string &iban, unsigned int ownerId, double amount, double interestRate = 0);

    double getInterestRate() const;

    void setInterestRate(double interestRate);

    void deposit(double amount) override;

    bool withdraw(double amount) override;

    void display() const override;

protected:
    Account *clone() const override;

private:
    double interestRate;
};


#endif //OOP_SAVINGSACCOUNT_H
