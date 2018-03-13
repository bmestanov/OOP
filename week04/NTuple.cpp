//
// Created by bmestanov on 13.03.18.
//

#include <cstddef>
#include <iostream>
#include "NTuple.h"

NTuple::NTuple(unsigned int size) {
    this->size = size;
    this->arr = new int[size];
}

NTuple::NTuple(const NTuple &other) {
    this->size = other.size;
    this->arr = new int[size];
    for (size_t i = 0; i < size; i++) {
        this->arr[i] = other.arr[i];
    }
}

NTuple &NTuple::operator=(const NTuple &other) {
    delete[] arr;
    this->size = other.size;
    this->arr = new int[size];
    for (size_t i = 0; i < size; i++) {
        this->arr[i] = other.arr[i];
    }
}

NTuple::~NTuple() {
    // size gets deleted automatically since it's not in the heap
    delete[] arr;
}

int NTuple::getComponent(unsigned int index) const {
    // Naive implementation with no checks for the index
    return arr[index];
}

void NTuple::setComponent(unsigned int index, int value) {
    // Naive implementation with no checks for the index
    arr[index] = value;
}

void NTuple::print() const {
    std::cout << "[";
    for (unsigned int i = 0; i < size - 1; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[size - 1] << "]" << std::endl;
}

int NTuple::sum() const {
    int sum = 0;
    for (unsigned int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double NTuple::average() const {
    return sum() / (double) size;
}

void NTuple::operator+=(const NTuple &other) {
    // This is dangerous! If other.size is less than this->size
    // we'll try to access memory that we shouldn't!
    for (unsigned int i = 0; i < size; i++) {
        arr[i] += other.arr[i];
    }
}

void NTuple::operator*=(const NTuple &other) {
    // Dangerous for the same reason.
    for (unsigned int i = 0; i < size; i++) {
        arr[i] *= other.arr[i];
    }
}

void NTuple::operator*=(int scalar) {
    for (unsigned int i = 0; i < size; i++) {
        arr[i] *= scalar;
    }
}

