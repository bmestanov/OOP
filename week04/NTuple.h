//
// Created by bmestanov on 11.03.18.
//

#ifndef OOP_NTUPLE_H
#define OOP_NTUPLE_H

class NTuple {

public:

    NTuple(unsigned int size = 2);

    NTuple(const NTuple &);

    NTuple &operator=(const NTuple &);

    ~NTuple();

    int getComponent(unsigned int) const;

    void setComponent(unsigned int, int);

    void print() const;

    int sum() const;

    double average() const;

    void operator+=(const NTuple &);

    void operator*=(const NTuple &);

    void operator*=(int);

private:
    unsigned int size;
    int *arr;
};


#endif //OOP_NTUPLE_H
