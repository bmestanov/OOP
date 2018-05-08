# Agenda week 12
## Pointers to base class
One of the key features of class inheritance is that a pointer to a derived class is type-compatible with a pointer to its base class.
```
Derived obj1, obj2;
Base *p = &obj1;
p->foo(); // Ability to call methods from base class
```
### Exercise
* Extend week10 classes with TaxiDriver (containing car model name).
* Write a method `void greet() const` that prints to the console information about the person.
* Write a function that takes "two people" and prints their information.
* Make an array of people and print their information for each one.
## Polymorphism
* Override vs overload
* `virtual` keyword
* Virtual functions are member functions whose behavior can be overridden in derived classes.
* __Polymorphic class__ = declares or inherits at least one virtual function.
* `virtual` destructors
* Abstract functions and classes
* `final` keyword