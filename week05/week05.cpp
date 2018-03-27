//
// Created by bmestanov on 18.03.18.
//

#include <iostream>
#include <cstring>
#include "PhonebookRecord.h"
#include "Phonebook.h"

// Finds the average of two ints
// demonstrates the use of local classes
double example1(int a, int b) {
    class Helper {
    public:
        Helper(int a, int b) : a(a), b(b) {}

        double avg() const {
            return (a + b) / 2.0;
        }

    private:
        int a, b;
    };

    Helper helper(a, b);
    return helper.avg();
}

int main05() {
    // Helper is not defined here

    // Testing the PhonebookRecord class
    PhonebookRecord rec = PhonebookRecord("ivan", "089884550", PhoneType::personal);
    return 0;
}