//
// Created by bmestanov on 12.06.18.
//

#ifndef OOP_PRIVILEGEACCOUNT_H
#define OOP_PRIVILEGEACCOUNT_H


#include "Account.h"

class PrivilegeAccount : public Account {
public:
    PrivilegeAccount(const std::string &iban, unsigned int ownerId, double amount, double overdraft = 0);

    double getOverdraft() const;

    void setOverdraft(double overdraft);

    void deposit(double amount) override;

    bool withdraw(double amount) override;

    void display() const override;

protected:
    Account *clone() const override;

private:
    double overdraft;
};


#endif //OOP_PRIVILEGEACCOUNT_H
