//
// Created by bmestanov on 27.02.18.
//

#ifndef OOP_BANKACCOUNT_H
#define OOP_BANKACCOUNT_H


class BankAccount {
public:
    BankAccount();

    BankAccount(const char *, int, double);

    const char *getHolderName() const;

    int getAccountId() const;

    double getBalance() const;

    void setHolderName(const char *);

    void setAccountId(int);

    void setBalance(double);

    void withdraw(double);

    void deposit(double);

    void initialize();

    void print() const;

private:
    char holderName[50];
    int accountId;
    double balance;
};


#endif //OOP_BANKACCOUNT_H
