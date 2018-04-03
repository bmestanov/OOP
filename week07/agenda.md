# Agenda week 07
* Review last week's home exercise
## Containers
* Collection of other objects
* Manages memory
* Provides access
#### Dynamic arrays
* Elements are ordered linear sequence in memory
* Auto-expansion
* Random access & pointer arithmetic
* Removing elements
#### Stack
* Can be implemented in different ways
* Access: LIFO (Last In First Out)
##  Exercise
`class Song`

Holds the following information
* `char name[50]`
* `char artist[50]`
* `unsigned int duration`

Implement:
* Constructors, operator=
* `friend boolean operator==(const Song &, const Song &)`
* `friend std::ostream &operator<<(std::ostream &, const Song &)`
* `friend std::istream &operator>>(std::istream &, const Song &)`

`class Tracklist` - a dynamic container for `Song` instances.
Make sure that all songs in the container are unique.

Implement methods:
* The usual ones
* `add(const Song &)`
* `remove(size_t index)`
* `remove(const Song &)`
* `friend std::ostream &operator<<(std::ostream &, const Tracklist &)`
* `friend std::istream &operator>>(std::istream &, const Tracklist &)`

> Serialize & deserialize objects using std::fstream

Reading for the vacation (a very helpful guide to C++ programming):
https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/