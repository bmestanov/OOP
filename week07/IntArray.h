//
// Created by bmestanov on 02.04.18.
//

#ifndef OOP_ARRAY_H
#define OOP_ARRAY_H

#include <cstdio>
#include <iostream>

class IntArray {
public:
    IntArray(size_t capacity = 10);

    IntArray(const IntArray &);

    IntArray &operator=(const IntArray &);

    ~IntArray();

    IntArray &add(const int &item);

    IntArray &removeLast();

    int indexOf(const int &item) const;

    int operator[](size_t index) const;

    friend std::ostream &operator<<(std::ostream &, const IntArray &);

private:
    int *arr;
    size_t size;
    size_t capacity;

    void copy(const IntArray &);
};

#endif //OOP_ARRAY_H
