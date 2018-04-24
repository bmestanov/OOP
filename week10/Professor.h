//
// Created by bmestanov on 24.04.18.
//

#ifndef OOP_PROFESSOR_H
#define OOP_PROFESSOR_H


#include "Person.h"

class Professor : public Person {
public:
    Professor(char *name, unsigned int age, unsigned int papers);

    Professor(const Professor &);

    Professor &operator=(const Professor &);

    ~Professor();

    friend std::ostream &operator<<(std::ostream &, const Professor &);

private:
    unsigned int papers;
};

#endif //OOP_PROFESSOR_H
