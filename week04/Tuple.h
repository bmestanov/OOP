//
// Created by bmestanov on 11.03.18.
//

#ifndef OOP_TUPLE_H
#define OOP_TUPLE_H


class Tuple {
public:
    Tuple();

    Tuple(int first, int second);

    Tuple(const Tuple &);

    Tuple &operator=(const Tuple &);

    int getFirst() const;

    void setFirst(int);

    int getSecond() const;

    void setSecond(int);

    void print() const;

    int sum() const;

    double average() const;

    void incrementBy(const Tuple &);

    void multiplyBy(const Tuple &);

    void multiplyBy(int);

private:
    int first;
    int second;
};


#endif //OOP_TUPLE_H
