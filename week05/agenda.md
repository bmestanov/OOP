# Agenda week 05
## Local classes
Check example1
## Enums
## `friend` declaration
The `friend` declaration appears in a class body and grants a function or another class access to private and protected members of the class where the friend declaration appears.

Notes
* `friend` of your `friend` is not your `friend`
* Access specifiers have no effect on the meaning of friend declarations

Main usage in this course: 
* Overloading operator<<, operator>> of std::cout, std::cin
* operator+, operator*...
* Comparison operators

## Exercise
`class PhonebookRecord`
Holds the following state
* `name` char[50]
* `phoneNumber` char[10]
* `PhoneType` := <home|personal|work>

Declare and define
* No default constructor
* Copy constructor
* `operator=`
* `friend std::ostream &operator<<(const std::ostream &os, const PhonebookRecord &record)` 
  Prints out the record in readable format

`class Phonebook`

Contains **n** `PhonebookRecord`s
* Declare and define the standard methods (Constructors, `operator=`, Destructor)

Also the following methods:
* `size_t size() const`
* `PhonebookRecord find(const char *name)` finds a record by name
> Hint: Use `strcmp`
* `friend Phonebook operator+(const Phonebook& first, const Phonebook &second)`
  Concatenates two phonebooks
* `friend std::ostream &operator<<(const std::ostream &os, const Phonebook &pb)`