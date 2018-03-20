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
* `friend std::ostream &operator<<(std::ostream &os, const PhonebookRecord &record)` 
  Prints out the record in readable format

#### Exercise home
* `friend bool operator==(const PhonebookRecord&, const PhonebookRecord &)` Returns true if names are identical
* `friend bool operator<(const PhonebookRecord&, const PhonebookRecord &)` Compares the records by name
> Hint: use `strcmp`

Example:
```
PhonebookRecord a = PhonebookRecord("Ivan", "0898856777", PhoneType::personal);
PhonebookRecord b = PhonebookRecord("Ivan", "02/125/128", PhoneType::home);
a == b; // true
a < b; // false
```

## To be solved on week06

`class Phonebook`
Contains **n** `PhonebookRecord`s
Has the following state:
* `Phonebook *arr`
* `size_t size`
* `size_t capacity`

Declare and define standard methods
* Constructors
* `operator=`
* Destructor
* Getters for `size` and `capacity`

Also the following methods:
* `PhonebookRecord add(const PhonebookRecord &)` adds a record to the list. If the size is more than the capacity, 
prints error and does nothing.
* `PhonebookRecord find(const char *name)` finds a record by name. 
> Hint: Use `strcmp`
* `friend Phonebook operator+(const Phonebook& first, const Phonebook &second)`
  Concatenates two phonebooks
* `friend std::ostream &operator<<(const std::ostream &os, const Phonebook &pb)`