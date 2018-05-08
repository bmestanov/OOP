//
// Created by bmestanov on 08.05.18.
//

#include <cstring>
#include "TaxiDriver.h"


TaxiDriver::TaxiDriver(const char *name, unsigned int age, const char *carModel) :
        Person(name, age) {
    this->carModel = new char[sizeof(carModel)];
    strcpy(this->carModel, carModel);
}

TaxiDriver::TaxiDriver(const TaxiDriver &other) : Person(other) {
    this->carModel = new char[sizeof(carModel)];
    strcpy(this->carModel, carModel);
}

TaxiDriver::~TaxiDriver() {
    std::cout << "TaxiDriver destructor called" << std::endl;
    delete[] carModel;
}

const char *TaxiDriver::getCarModel() const {
    return carModel;
}

void TaxiDriver::setCarModel(char *carModel) {
    TaxiDriver::carModel = carModel;
}

void TaxiDriver::greet() const {
    Person::greet();
    std::cout << "My car model is " << carModel;
}
