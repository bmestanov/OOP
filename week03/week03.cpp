//
// Created by bmestanov on 05.03.18.
//

#include <cstring>

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
    std::strcpy(this->title, "No title");
    this->pages = 0;
}

Document::Document(const char *title, unsigned pages) {
    std::strcpy(this->title, title);
    this->pages = pages;
}

Document::Document(const Document &other) {
    std::strcpy(this->title, other.title);
    this->pages = other.pages;
}

Document &Document::operator=(const Document &other) {
    std::strcpy(this->title, other.title);
    this->pages = other.pages;
    return *this;
}

void Document::print() const {
    std::cout << title << " " << pages;
}


void example3(Document document) {
    document.print();
}


int main03() {
    Document a;
    Document b = Document("Document 1", 32);
    Document c = Document(b);
    a = c;
    example3(a);
}