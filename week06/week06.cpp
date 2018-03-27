//
// Created by bmestanov on 27.03.18.
//

#include <iostream>
#include "../week05/Phonebook.h"

int main06() {
    // Testing the Phonebook class
    Phonebook pb1(2); // Initialize with capacity 2

    // Now add 3 items
    pb1.add(PhonebookRecord("ivan", "089898", PhoneType::personal))
            .add(PhonebookRecord("dragan", "02/1235795", PhoneType::home))
            .add(PhonebookRecord("velin", "02/4848484", PhoneType::home));
    // pb1.getSize() returns 3, pb1.getCapacity() returns 4. It expanded!

    std::cout << "pb1 looks like this:" << std::endl << pb1;

    // Try to find one
    PhonebookRecord rec = pb1.find("velin");

    std::cout << "Record looks like this:" << std::endl << rec;

    Phonebook pb2; // Capacity is 10
    pb2.add(PhonebookRecord("maria", "0897112357", PhoneType::work));

    Phonebook pb3 = pb1 + pb2;
    std::cout << "pb3 looks like this:" << std::endl << pb3;
    return 0;
}