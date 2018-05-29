//
// Created by bmestanov on 28.05.18.
//

#ifndef OOP_ITEM_H
#define OOP_ITEM_H


#include <cstring>
#include <fstream>

class Item {
public:
    Item(const char *name);

    ~Item();

    // Write to cout
    friend std::ostream &operator<<(std::ostream &os, const Item &a);

    // Read from cin
    friend std::istream &operator>>(std::istream &is, Item &a);

    // Write to file
    friend std::ofstream &operator<<(std::ofstream &os, const Item &a);

    // Read from file
    friend std::ifstream &operator>>(std::ifstream &is, Item &a);

private:
    static int ID_COUNTER;
    int id;
    char *name;
};


#endif //OOP_ITEM_H
