//
// Created by bmestanov on 31.03.18.
//

#include <iostream>
#include <vector>
#include <fstream>
#include "IntArray.h"

int main07() {
    int a = 4;
    IntArray vec(2);
    vec.add(1).add(2).add(3).add(5);

    std::cout << vec;

    return 0;
}