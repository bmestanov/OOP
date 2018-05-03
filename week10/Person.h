//
// Created by bmestanov on 24.04.18.
//

#ifndef OOP_PERSON_H
#define OOP_PERSON_H

#include <iostream>

class Person {
public:

    Person() = default;

    Person(const char *name, unsigned int age);

    Person(const Person &);

    Person &operator=(const Person &);

    ~Person();

    friend std::ostream &operator<<(std::ostream &, const Person &);

    unsigned int getAge() const;

    void setAge(unsigned int age);

    const char *getName() const;

    void setName(const char *);

protected:
    char name[50];
    unsigned int age;
};


#endif //OOP_PERSON_H
