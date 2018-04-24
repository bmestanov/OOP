# Agenda week 10
## Static members & methods
* Associated with the class rather than instances

Example: Singleton pattern

## Inheritance
* Motivation
* Benefits:
    * Less typing => less errors
    * Maintainability
    * Intuitive way of modelling problems
* Syntax & inheritance modes
* Exercise/example 
```
class Professor {
    char *name;
    unsigned int age;
    unsigned int papers;
}

class ProgrammingLanguage {
    char *name;
    bool compiled;
}

class Programmer {
    char *name;
    unsigned int age;
    ProgrammingLanguage language;
}
```
* Order of construction/destruction
* In-memory representation

Reading: [Modes of inheritence](https://www.geeksforgeeks.org/inheritance-in-c/#Modes%20of%20Inheritance)