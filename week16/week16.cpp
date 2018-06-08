//
// Created by bmestanov on 04.06.18.
//

#include <string>
#include <memory>
#include <iostream>
#include <vector>
#include "../week13/View.h"

int main16() {
    std::string s = "hello", s1 = "world";
    s1 = s;
    std::vector<std::string> vec;
    vec.push_back(s);
    vec.pop_back();
    vec.at(2);
    vec[2];
    vec.erase(vec.begin() + 2);
    return 0;
}