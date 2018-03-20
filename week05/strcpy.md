## How to solve build errors caused by `strcpy`
Use `strcpy_s`
Instead of `strcpy(dest, src)` use `strcpy_s(dest, destsz, src)`. 
`destz` maximum number of characters to write, typically the size of the destination

Example:
```
char a[] = "12345"; // a is ['1','2','3','4','5','\0']
char b[] = "654321";
strcpy_s(a, sizeof a, b);
// a is "65432" now
```

## OR

Disable deprecation warnings in Visual Studio
Under Project -> Properties -> C/C++ -> Preprocessor -> Preprocessor Definitions" 
add ;_CRT_SECURE_NO_WARNINGS

Use `strcpy` normally


Reading: http://en.cppreference.com/w/c/string/byte/strcpy