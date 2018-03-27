//
// Created by bmestanov on 20.03.18.
//

#ifndef OOP_PHONEBOOK_H
#define OOP_PHONEBOOK_H


#include <ostream>
#include "PhonebookRecord.h"

class Phonebook {
public:
    Phonebook(size_t capacity = 10);

    Phonebook(const Phonebook &);

    Phonebook &operator=(const Phonebook &);

    ~Phonebook();

    PhonebookRecord find(const char *query) const;

    Phonebook &add(const PhonebookRecord &);

    size_t getSize() const;

    size_t getCapacity() const;

    friend std::ostream &operator<<(std::ostream &, const Phonebook &);

    friend Phonebook operator+(const Phonebook &, const Phonebook &);

private:
    size_t size;
    size_t capacity;
    PhonebookRecord *arr;

    void copy(const Phonebook &);
};


#endif //OOP_PHONEBOOK_H
