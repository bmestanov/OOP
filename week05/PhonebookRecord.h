//
// Created by bmestanov on 20.03.18.
//

#ifndef OOP_PHONEBOOKRECORD_H
#define OOP_PHONEBOOKRECORD_H

#include <ostream>

enum PhoneType {
    personal, work, home
};

class PhonebookRecord {
public:
    // Let the compiler handle all initialization
    // alternatively, you can write an empty default constructor
    PhonebookRecord() = default;

    PhonebookRecord(const char *name, const char *phoneNumber, PhoneType type);

    PhonebookRecord(const PhonebookRecord &);

    PhonebookRecord &operator=(const PhonebookRecord &);

    friend std::ostream &operator<<(std::ostream &, const PhonebookRecord &);

    // Now Phonebook can "see" everything on PhonebookRecord
    friend class Phonebook;

private:
    char name[50];
    char phoneNumber[10];
    PhoneType type;
};

#endif //OOP_PHONEBOOKRECORD_H
