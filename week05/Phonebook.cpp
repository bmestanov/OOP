//
// Created by bmestanov on 20.03.18.
//

#include <cstring>
#include "Phonebook.h"

Phonebook::Phonebook(size_t capacity) {
    this->capacity = capacity;
    this->size = 0;
    this->arr = new PhonebookRecord[capacity];
}

Phonebook::Phonebook(const Phonebook &other) {
    copy(other);
}

Phonebook &Phonebook::operator=(const Phonebook &other) {
    if (this != &other) {
        delete[] arr;
        copy(other);
    }

    return *this;
}

Phonebook::~Phonebook() {
    delete[] arr;
}

size_t Phonebook::getSize() const {
    return size;
}

size_t Phonebook::getCapacity() const {
    return capacity;
}

PhonebookRecord Phonebook::find(const char *query) const {
    for (size_t i = 0; i < size; i++) {
        if (std::strcmp(query, arr[i].name) == 0) {
            return arr[i];
        }
    }
}

std::ostream &operator<<(std::ostream &os, const Phonebook &pb) {
    for (size_t i = 0; i < pb.size; i++) {
        os << pb.arr[i];
    }
}

Phonebook operator+(const Phonebook &pb1, const Phonebook &pb2) {
    // The result phonebook has capacity - the sum of capacities
    Phonebook result = Phonebook(pb1.capacity + pb2.capacity);
    // The result phonebook has size - the sum of sizes
    result.size = pb1.size + pb2.size;

    // Copy the content of the first one
    for (size_t i = 0; i < pb1.size; i++) {
        result.arr[i] = pb1.arr[i];
    }

    // Copy the content of the second one
    for (size_t i = 0; i < pb2.size; i++) {
        result.arr[pb1.size + i] = pb2.arr[i];
    }

    return result;
}

Phonebook &Phonebook::add(const PhonebookRecord &record) {
    if (size == capacity) {
        // All slots are filled now
        // Automatically expand the available space
        capacity *= 2; // Expand twice
        PhonebookRecord *pbr = new PhonebookRecord[capacity]; // Allocate new slots
        for (size_t i = 0; i < size; i++) {
            // Copy old data to the new slots
            pbr[i] = arr[i];
        }

        // Now that the data is copied, we should delete the old records
        delete[] arr;
        // arr now points to the new, expanded array
        arr = pbr;
    }

    // Add the new record
    arr[size] = record;
    size++;

    return *this;
}

// Helper member-function
void Phonebook::copy(const Phonebook &other) {
    this->capacity = other.capacity;
    this->size = other.size;
    this->arr = new PhonebookRecord[capacity];

    for (size_t i = 0; i < other.size; i++) {
        this->arr[i] = other.arr[i];
    }
}
