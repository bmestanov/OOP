//
// Created by bmestanov on 03.04.18.
//

#include "Tracklist.h"

// Using the following format for serialization
// <capacity> <size> <song1> <song2> ...

Tracklist::Tracklist(size_t capacity) {
    this->size = 0;
    this->capacity = capacity;
    this->arr = new Song[capacity];
}

Tracklist::~Tracklist() {
    delete[] arr;
}

Tracklist &Tracklist::operator=(const Tracklist &other) {
    if (this != &other) {
        delete[] arr;
        this->capacity = other.capacity;
        this->size = other.size;
        this->arr = new Song[capacity];

        for (size_t i = 0; i < other.size; i++) {
            this->arr[i] = other.arr[i];
        }
    }

    return *this;
}

Tracklist &Tracklist::add(const Song &song) {
    arr[size++] = song;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Tracklist &tracklist) {
    os << tracklist.capacity << " ";
    os << tracklist.size << " ";
    for (int i = 0; i < tracklist.size; i++) {
        // Calling the overloaded operator<< of Song
        os << tracklist.arr[i];
    }

    return os;
}

std::istream &operator>>(std::istream &is, Tracklist &tracklist) {
    // Reading in the same order as we wrote
    size_t capacity, size;
    is >> capacity;
    is >> size;

    // Re-assign tracklist to a new one
    tracklist = Tracklist(capacity); // operator= is called
    Song temp; // We'll use this to read each song from the file
    for (int i = 0; i < size; i++) {
        is >> temp; // Calling the overloaded operator>> of Song
        tracklist.add(temp); // Add to the tracklist
    }

    return is;
}
