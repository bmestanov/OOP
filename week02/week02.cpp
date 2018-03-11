#include "BankAccount.h"

/*
 * Takes as arguments two bank accounts
 * Returns a new bank account where
 * the account name and id belong to the first one
 * and the balance is the sum of the arguments' balances
 */
BankAccount merge(const BankAccount &account1, const BankAccount &account2) {
    BankAccount merged = BankAccount();
    merged.setHolderName(account1.getHolderName());
    merged.setAccountId(account1.getAccountId());
    merged.setBalance(account1.getBalance() + account2.getBalance());
    return merged;
}

/*
 * Takes as arguments a non-empty array of BankAccount objects
 * and the length of the array.
 * Returns the index of the account with the maximum balance
 */
int maxIndex(const BankAccount *accountArr, int len) {
    double currentMax = accountArr[0].getBalance();
    int currentMaxIdx = 0;

    for (int i = 1; i < len; i++) {
        double currentBalance = accountArr[i].getBalance();

        if (currentBalance > currentMax) {
            currentMaxIdx = i;
            currentMax = currentBalance;
        }
    }

    return currentMaxIdx;
}

int main02() {
    BankAccount account1 = BankAccount("Bank account 1", 1, 3.14);
    BankAccount account2 = BankAccount("Bank account 2", 2, 2.86);
    BankAccount merged = merge(account1, account2);
    std::cout << "Merged accounts" << std::endl;
    merged.print();

    BankAccount accountArr[] = {account1, account2};
    int maxIdx = maxIndex(accountArr, 2);
    std::cout << "Max account" << std::endl;
    accountArr[maxIdx].print();
    return 0;
}