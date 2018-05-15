# OOP
OOP course materials. FMI 2017/2018.

## Message
During the course we've used `strlen` and `sizeof` over char arrays interchangeably. 
There is a difference however that can cause problems in your solutions:
```
size_t getLen(const char *p) {
    return sizeof(p);
}

void main() {
    const char hello[] = "Hello"; // length is 6
    std::cout << sizeof(hello); // Output: 6 
    std::cout << strlen(hello) + 1; // Output: 6
    std::cout << getLen(hello); // Output: 8 - not correct!
}
```

The reason for this is because in the main function hello is treated as an array - and `sizeof` over char arrays returns
the length of the word + 1 (what we expect). But as soon as we pass `hello` as an argument, it's treated as a char pointer,
which will have size 8/16 no matter the word.

Conclusion: Use `strlen` for finding length of char arrays.