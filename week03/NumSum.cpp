//
// Created by bmestanov on 06.03.18.
//

#include "NumSum.h"

NumSum::NumSum() {
    this->currentSum = 0;
    this->changeCount = 0;
}

NumSum::NumSum(unsigned int sum) : // Using an initializer list
        currentSum(sum), changeCount(1) {}

NumSum::NumSum(const NumSum &other) {
    this->currentSum = other.currentSum;
    this->changeCount = other.changeCount;
}

unsigned int NumSum::sum() const {
    return currentSum;
}

unsigned int NumSum::changes() const {
    return changeCount;
}

void NumSum::add(unsigned int num) {
    currentSum += num;
    changeCount++;
}

void NumSum::sub(unsigned int num) {
    currentSum -= num;
    changeCount++;
}

double NumSum::average() const {
    if (changeCount == 0) {
        return 0;
    }

    return ((double) currentSum) / changeCount;
}
