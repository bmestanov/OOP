//
// Created by bmestanov on 28.05.18.
//

#include <cstring>
#include <fstream>
#include <iostream>
#include <cassert>
#include "Item.h"

int main15() {
    Item a("chips"), x("butter");
    std::ifstream ifs;
    std::ofstream ofs;

    ofs.open("demo1");
    ofs << a << x;
    ofs.close();

    /*ifs.open("demo1");
    Item b("cocoa"), c("potato");
    ifs >> b >> c;
    ifs.close();

    std::cout << b << c;

    std::cin >> b;
    std::cout << b;*/
    return 0;
}