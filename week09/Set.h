//
// Created by bmestanov on 17.04.18.
//

#ifndef OOP_SET_H
#define OOP_SET_H

#include <cstddef>

template<typename T>
class Set {
public:
    Set(size_t capacity = 10);

    Set(const Set &);

    Set &operator=(const Set &);

    ~Set();

    size_t getSize() const;

    size_t getCapacity() const;

    const T *asArray() const;

    bool contains(const T &) const;

    Set &add(const T &);

    Set &remove(const T &);

    void print() const;

private:
    T *arr;
    size_t size;
    size_t capacity;

    void copy(const Set &);

    void expand();

    int indexOf(const T &) const;
};

template<typename T>
Set<T>::Set(size_t capacity) {
    this->capacity = capacity;
    this->size = 0;
    this->arr = new T[capacity];
}

template<typename T>
Set<T>::Set(const Set<T> &other) {
    copy(other);
}

template<typename T>
Set<T> &Set<T>::operator=(const Set<T> &other) {
    if (this != &other) {
        delete[] arr;
        copy(other);
    }

    return *this;
}

template<typename T>
Set<T>::~Set() {
    delete[] arr;
}

template<typename T>
size_t Set<T>::getSize() const {
    return size;
}

template<typename T>
size_t Set<T>::getCapacity() const {
    return capacity;
}

template<typename T>
const T *Set<T>::asArray() const {
    return arr;
}

template<typename T>
bool Set<T>::contains(const T &item) const {
    return indexOf(item) >= 0;
}

template<typename T>
Set<T> &Set<T>::add(const T &item) {
    if (!contains(item)) {
        if (size == capacity) {
            expand();
        }

        arr[size++] = item;
    }

    return *this;
}

template<typename T>
Set<T> &Set<T>::remove(const T &item) {
    // This is the normal way of doing removal.
    // We discussed how this could be optimized with
    // swapping the first and the last elements
    int index = indexOf(item);
    if (index >= 0) {
        for (size_t i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    return *this;
}

template<typename T>
void Set<T>::copy(const Set &other) {
    this->capacity = other.capacity;
    this->size = other.size;
    this->arr = new T[capacity];

    for (size_t i = 0; i < other.size; i++) {
        this->arr[i] = other.arr[i];
    }
}

template<typename T>
void Set<T>::expand() {
    capacity *= 2;
    T *newArr = new T[capacity];
    for (size_t i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    delete[] arr;
    arr = newArr;
}

template<typename T>
int Set<T>::indexOf(const T &item) const {
    for (size_t i = 0; i < size; i++) {
        // Notice that the program won't compile
        // if T has no operator==
        if (arr[i] == item) {
            return i;
        }
    }

    return -1;
}

template<typename T>
void Set<T>::print() const {
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i];
    }

    std::cout << std::endl;
}


#endif //OOP_SET_H
