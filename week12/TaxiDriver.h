//
// Created by bmestanov on 08.05.18.
//

#ifndef OOP_TAXIDRIVER_H
#define OOP_TAXIDRIVER_H


#include "../week10/Person.h"

class TaxiDriver : public Person {
public:
    TaxiDriver() = default;

    TaxiDriver(const char *name, unsigned int age, const char *carModel);

    TaxiDriver(const TaxiDriver &);

    void greet() const override;

    ~TaxiDriver();

    const char *getCarModel() const;

    void setCarModel(const char *carModel);

private:
    char *carModel;
};


#endif //OOP_TAXIDRIVER_H
