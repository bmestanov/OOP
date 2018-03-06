//
// Created by bmestanov on 06.03.18.
//

#ifndef OOP_NUMSUM_H
#define OOP_NUMSUM_H


class NumSum {
public:
    NumSum();

    NumSum(unsigned int);

    NumSum(const NumSum &);

    NumSum &operator=(const NumSum &) = delete;

    unsigned int sum() const;

    unsigned int changes() const;

    void add(unsigned int);

    void sub(unsigned int);

    double average() const;

private:
    unsigned int currentSum;
    unsigned int changeCount;
};


#endif //OOP_NUMSUM_H
