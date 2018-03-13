cmake_minimum_required(VERSION 3.9)
project(oop)

set(CMAKE_CXX_STANDARD 17)
add_executable(oop main.cpp
        week02/BankAccount.cpp week02/BankAccount.h
        week03/NumSum.cpp week03/NumSum.h
        week04/Tuple.cpp week04/Tuple.h week04/NTuple.h week04/NTuple.cpp)