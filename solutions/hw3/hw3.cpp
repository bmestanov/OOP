//
// Created by bmestanov on 13.06.18.
//

#include <cassert>
#include "Bank.h"

int hw3() {
    Bank aBank("A Bank", "Bankland");
    Bank bBank("B Bank", "Bankland");

    assert(!aBank.addAccount(current, 1, "OBB123", 30));
    assert(aBank.addCustomer(1, "Customer 1", "Customerland"));
    assert(aBank.addAccount(current, 1, "OBB123", 30));
    assert(aBank.addAccount(current, 1, "OBB124", 40));
    assert(aBank.accountsCount() == 2);
    assert(aBank.customersCount() == 1);

    Bank cBank = aBank;
    assert(cBank.accountsCount() == 2);
    assert(cBank.customersCount() == 1);

    bBank = cBank;
    assert(bBank.accountsCount() == 2);
    assert(bBank.customersCount() == 1);

    assert(!bBank.deleteCustomer(2));
    assert(bBank.deleteCustomer(1));
    assert(bBank.accountsCount() == 0);
    assert(bBank.customersCount() == 0);
}