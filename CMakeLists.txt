cmake_minimum_required(VERSION 3.9)
project(oop)

set(CMAKE_CXX_STANDARD 17)
add_executable(oop main.cpp
        week02/BankAccount.cpp week02/BankAccount.h
        week03/NumSum.cpp week03/NumSum.h
        week04/Tuple.cpp week04/Tuple.h week04/NTuple.h week04/NTuple.cpp
        week05/PhonebookRecord.cpp week05/PhonebookRecord.h week05/Phonebook.cpp week05/Phonebook.h week07/IntArray.h week07/IntArray.cpp week07/Song.cpp week07/Song.h week07/Tracklist.cpp week07/Tracklist.h week09/NTuple.h week09/Set.h week10/Person.cpp week10/Person.h week10/Professor.cpp week10/Professor.h)