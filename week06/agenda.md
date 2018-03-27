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
* `friend std::ostream &operator<<(std::ostream &os, const Phonebook &pb)`

## Next step
Make the container auto-expand

## Exercise home
Using the same techniques for expansion write
`class AutoExpandArray`

Contains arbitrary number of `int`s
Has the following state:
* `int *arr`
* `size_t size`
* `size_t capacity`

Declare and define standard methods
* Constructors
* `operator=`
* Destructor
* Getters for `size` and `capacity`

Also the following methods:
* `AutoExpandArray &add(int value)` adds an item to the list.
* `AutoExpandArray &removeLast()` removes the last item from the list.
* `int indexOf(int value)` finds the index of the argument, or -1 if the item is not in the list.
* `int operator[](int index) const` finds the value, given an index.
* `friend AutoExpandArray operator+(const AutoExpandArray& first, const AutoExpandArray &second)`
* `friend std::ostream &operator<<(std::ostream &os, const AutoExpandArray &arr)`

Example
```
AutoExpandArray arr(2); // What happens if we initialize the capacity with 0?
arr.add(2).add(3).add(4);
std::cout << arr[0]; // Prints 2
arr.indexOf(3); // returns 1
arr.removeLast();
std::cout << arr; // prints [2,3]
```
