//
// Created by bmestanov on 05.03.18.
//

#include <cstring>
#include <iomanip>
#include "NumSum.h"

//---------- Example 1
class Student {
public:
    Student(unsigned, unsigned);

private:
    unsigned age;
    unsigned facultyNum;
};

Student::Student(unsigned age, unsigned facultyNum) :
        age(age), facultyNum(facultyNum) {}


//---------- Example 2
class Document {
public:
    Document();

    Document(const char *title, unsigned pages);

    Document(const Document &);

    Document &operator=(const Document &);

    void print() const;

private:
    char title[50];
    unsigned pages;
};

Document::Document() {
    std::cout << "Default constructor called" << std::endl;
    std::strcpy(this->title, "No title");
    this->pages = 0;
}

Document::Document(const char *title, unsigned pages) {
    std::cout << "Custom constructor called" << std::endl;
    std::strcpy(this->title, title);
    this->pages = pages;
}

Document::Document(const Document &other) {
    std::cout << "Copy constructor called" << std::endl;
    std::strcpy(this->title, other.title);
    this->pages = other.pages;
}

Document &Document::operator=(const Document &other) {
    std::cout << "operator= called" << std::endl;
    std::strcpy(this->title, other.title);
    this->pages = other.pages;
    return *this;
}

void Document::print() const {
    std::cout << title << " " << pages << std::endl;
}


void example3(Document document) {
    document.print();
}

int main03() {
    Document a;
    Document b = Document("Document 1", 32);
    Document c = Document(b);
    Document &d = c;
    Document *pC = &c;
    std::cout << &c << std::endl;
    std::cout << &d << std::endl;
    std::cout << pC << std::endl;
    a = c;
    example3(a);

    NumSum sum = NumSum(1);
    sum.add(5);
    sum.add(6);
    sum.add(7);
    std::cout << std::setprecision(2) << std::fixed << sum.average();
    return 0;
}