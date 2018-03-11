#include <cstring>
#include <iostream>

void example1() {
    int p = 42, q = 420;
    int *p1 = &p;               // non-const pointer to non-const int
    const int *p2;              // non-const pointer to const int
    int *const p3 = &p;         // const pointer to non-const int
    const int *const p4 = &p;   // const pointer to const int

//    Will not compile with the following lines
//    p4 = &q;
//    *p2 = 666;
//    int *const p5;
}

int increment(int x) {
    return ++x; // only updates x in the current stack frame
}

// To be used in example 2
int sum(const int x, const int y) {
    return x + y;
}

int square(const int x) {
    return x * x;
}

int compose(int (*f1)(const int, const int), int (*f2)(const int), const int x, const int y) {
    return f2(f1(x, y));
}

void example2(const int x, int y) {

    int (*plus)(const int, const int) = sum;

    // Note that y gets implicitly cast to const int.
    // The other way around is not allowed
    std::cout << plus(1, 2) << std::endl;
    std::cout << compose(sum, square, 1, 2);
}

// What is wrong with this example?
int *example3() {
    int magic = 42;
    int *magicPointer = &magic;

    // This will trigger undefined behavior because
    // magic will get deleted after the return

    // Undefined behavior means the C++ standard does not
    // specify what to do in this situation
    // so this might result in a crash, warning or else.
    // Some IDEs might copy the magic variable to the previous stack frame
    // and the program will continue as if everything is ok.

    // Avoid this nevertheless
    return magicPointer;
}

// Is this better?
int *example4() {
    int *magicPointer = new int(42);
    return magicPointer; // cannot be sure if delete will be called
}

void swapExample(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main01() {
    std::cout << "Nothing here";
    return 0;
}