# Agenda week 04
## Constructors recap
* Default constructor
* Copy constructor
* `operator=`
## Destructor
`~ClassName();`
* Marks the end of the life cycle of an object
* Called automatically when the object goes out of scope
* Important when dealing with dynamic memory
## Object life cycle
## Pointers vs references to objects
### Pointers 
`Object *pObj = &otherObj`
* An identifier of an address in memory
* Can be `NULL` (or `nullptr` since C++11)
* Can do pointer arithmetic
### References
`Object &rObj = otherObj`
* An alias for another object
* Must be initialized

Both are used to bypass copying objects as function arguments
### `new` and `delete`

## Exercise
`class Tuple` - ordered list of 2 `int`s
* Constructors (default, copy, `operator=`)
* Constructor with 2 arguments - initializer for each component
* Setters & getters for each component
* `print` Prints out the tuple
* `sum` The sum of both components
* `average` The average of components
* `incrementBy` Addition by component
* `multiplyBy` Multiplication by component
* `multiplyBy` Scalar multiplication

Examples
```
Tuple tuple1 = Tuple(1,4);
Tuple tuple2 = Tuple(0, 2);

tuple1.print(); // [1,4]

std::cout << tuple1.sum() << std::endl; // 5
std::cout << tuple1.average() << std::endl; // 2.5

tuple1.incrementBy(tuple2);
tuple1.print(); // [1,6] (1+0, 4+2)

tuple1.multiplyBy(tuple1);
tuple1.print(); // [1, 36] (1*1, 6*6)

tuple1.multiplyBy(-2);
tuple1.print(); // [-2, -72] (1*(-2), 36*(-2)) 
```

## The next step
`class NTuple` - ordered list of N `int`s