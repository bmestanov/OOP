# Agenda week 06
## Good to know
* `new[]` initializes the object on the heap via the default constructor
* Before the function body of the constructor begins executing, initialization of all data members is finished.
* `sizeof`
## Finish the exercise from last time

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
* `add(const PhonebookRecord &)` adds a record to the list.
* `PhonebookRecord find(const char *name)` finds a record by name. 
> Hint: Use `strcmp`
* `friend Phonebook operator+(const Phonebook& first, const Phonebook &second)`
  Concatenates two phonebooks
* `friend std::ostream &operator<<(const std::ostream &os, const Phonebook &pb)`

## Next step
Make the container auto-expand