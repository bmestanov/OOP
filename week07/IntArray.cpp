//
// Created by bmestanov on 02.04.18.
//

#include <ostream>
#include "IntArray.h"

IntArray::IntArray(size_t capacity) {
    this->capacity = capacity;
    this->size = 0;
    this->arr = new int[capacity];
}

IntArray::IntArray(const IntArray &other) {
    copy(other);
}

IntArray &IntArray::operator=(const IntArray &other) {
    if (this != &other) {
        delete[] arr;
        copy(other);
    }

    return *this;
}

IntArray::~IntArray() {
    delete[] arr;
}

IntArray &IntArray::add(const int &item) {
    if (size == capacity) {
        capacity *= 2;
        int *expanded = new int[capacity];
        for (size_t i = 0; i < size; i++) {
            expanded[i] = arr[i];
        }

        delete[] arr;
        arr = expanded;
    }

    arr[size] = item;
    size++;

    return *this;
}

IntArray &IntArray::removeLast() {
    size--;
    return *this;
}

int IntArray::indexOf(const int &item) const {
    for (size_t i = 0; i < size; i++) {
        if (item == arr[i]) {
            return i;
        }
    }

    return -1;
}

int IntArray::operator[](size_t index) const {
    return arr[index];
}

std::ostream &operator<<(std::ostream &os, const IntArray &array) {
    os << "[";

    for (size_t i = 0; i < array.size; i++) {
        os << array[i];
        if (i == array.size - 1) {
            // This is the last element
            os << "]";
        } else {
            os << ", ";
        }
    }
}

void IntArray::copy(const IntArray &other) {
    this->capacity = other.capacity;
    this->size = other.size;
    this->arr = new int[capacity];

    for (size_t i = 0; i < other.size; i++) {
        this->arr[i] = other.arr[i];
    }
}