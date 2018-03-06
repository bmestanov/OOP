# Agenda Week 03
## Implicitly declared member functions
### Constructors & overloading
### Default constructor
* The compiler can declare a default constructor as public member of its class.
* Explicit deletion with `= delete`

more:
http://en.cppreference.com/w/cpp/language/default_constructor
### Default parameters to functions
### Member initializer lists
### Copy constructor
Used for initializing an object using another instance of the same class

Called when pass-by-value and returned from function 
### Copy-assignment operator
Used for making an already initialized object identical to another instance

[A helpful table](/img/constructors.jpg) 

## Exercise

### `class NumSum`
Maintains the sum of unsigned numbers

Requirements:
* Default constructor (sets the sum to 0)
* Constructor with single argument - the sum initializer
* Copy constructor
* No copy-assignment operator
* No getters or setters

Methods:
* `sum()`          Returns the current sum
* `add(unsigned int)`   Adds to the sum
* `sub(unsigned int)`   Subtracts from the sum
* `changes()`   Count of changes to the sum
* `average()`       Average of changes

Example:
```
NumSum s;
s.add(10);
s.add(3);
s.sub(2);
cout << s.sum(); // 10 + 3 - 2 = 11
cout << s.changes(); // 3
cout << s.average(); // (10 + 3 - 2)/3 = 3.66
```

### Exercise home
Add the following capabilities to our `NumSum` class:
* `maxChange()`   Returns the maximum of all changes
* `minChange()`   Returns the minimum of all changes
* `range()` Returns the range between min & max
* Add validation to `sub(unsigned int)` avoid situations like these:
```
s.add(10);
s.sub(100);
cout << s.sum(); // ???
```