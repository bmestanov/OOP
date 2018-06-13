//
// Created by bmestanov on 12.06.18.
//

#ifndef OOP_CUSTOMER_H
#define OOP_CUSTOMER_H

#include <string>


class Customer {
public:
    Customer(unsigned id, const std::string &name, const std::string &address);

    unsigned int getId() const;

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getAddress() const;

    void setAddress(const std::string &address);

    void display() const;

private:
    unsigned id;
    std::string name;
    std::string address;
};


#endif //OOP_CUSTOMER_H
