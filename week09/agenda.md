# Agenda week 09
## Function templates and class templates
* A template is a C++ entity that defines how the compiler should generate an actual function (or class).
* Class templates != template classes.
* Definitions are placed in the .h file after the declaration.
* _Algorithm **abstraction**_ - expressing our algorithms in a very general way so that we can detail and 
concentrate on the substantive part of the algorithm.
* Syntax

```
template<typename T> // template prefix, T is a type parameter
void foo(T a); // Use T as a normal type name

template<typename T, typename V>
void foo(T a, V b); // You can give multiple arguments

template<typename T, bool B>
void foo(T a); // Arguments are not limited to type names

template<typename T = int>
void foo(T a); // You can use default arguments
```
```
template<typename T>
class Foo {
  // Use T as a normal type name in the definition of the class
  // Here, you refer to the class as Foo
  
  T value;
} // After this point refer to the class as Foo<T>

// All member functions are template functions
template<typename T>
T Foo<T>::getValue() const { ... }
```

## Exercise
```
template <typename T>
class Set
```
A dynamic container for instances of T.
Write the following methods:
* Constructors
* `operator=`
* Destructor
* Getters for size and capacity
* `const T *asArray() const` returns pointer to the elements
> Notice the returned array has const elements. 
> This is important since we don't want any modifications from outside!
* `bool contains(const T &) const` checks if the element is in the container
* `Set &add(const T &)` adds only if the element is not already in the container
* `Set &remove(const T &)` removes the element from the container if it exists
* `void print() const` prints to the console

Implement template functions over sets in your main.cpp file
* `Set<T> unionOf(const Set<T> &a, const Set<T> &b)` 
* `Set<T> intersectionOf(const Set<T> &a, const Set<T> &b)`

Read more:

[Linked List Stack Visualization](https://www.cs.usfca.edu/~galles/visualization/StackLL.html)

[Algorithm abstraction](http://www.tulane.edu/~mpuljic/cpp/savitch/chapter14)

[Function templates](http://en.cppreference.com/w/cpp/language/function_template)
