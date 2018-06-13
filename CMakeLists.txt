cmake_minimum_required(VERSION 3.9)
project(oop)

set(CMAKE_CXX_STANDARD 17)
add_executable(oop main.cpp
        week02/BankAccount.cpp week02/BankAccount.h
        week03/NumSum.cpp week03/NumSum.h
        week04/Tuple.cpp week04/Tuple.h week04/NTuple.h week04/NTuple.cpp
        week05/PhonebookRecord.cpp week05/PhonebookRecord.h week05/Phonebook.cpp week05/Phonebook.h
        week07/IntArray.h week07/IntArray.cpp week07/Song.cpp week07/Song.h week07/Tracklist.cpp week07/Tracklist.h
        week09/NTuple.h week09/Set.h
        week10/Person.cpp week10/Person.h week10/Professor.cpp week10/Professor.h
        week12/TaxiDriver.cpp week12/TaxiDriver.h week12/Shape.cpp week12/Shape.h week12/Triangle.cpp week12/Triangle.h week12/Circle.cpp week12/Circle.h
        week13/View.cpp week13/View.h week13/Button.cpp week13/Button.h week13/Color.cpp week13/Color.h week13/TextButton.cpp week13/TextButton.h week15/Item.cpp week15/Item.h solutions/hw3/Customer.cpp solutions/hw3/Customer.h solutions/hw3/Account.cpp solutions/hw3/Account.h solutions/hw3/CurrentAccount.cpp solutions/hw3/CurrentAccount.h solutions/hw3/SavingsAccount.cpp solutions/hw3/SavingsAccount.h solutions/hw3/PrivilegeAccount.cpp solutions/hw3/PrivilegeAccount.h solutions/hw3/Bank.cpp solutions/hw3/Bank.h)