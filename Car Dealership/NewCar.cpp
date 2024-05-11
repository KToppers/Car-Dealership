/*
#include "newcar.h"
#include <iostream>

NewCar::NewCar(std::string vin, std::string make, std::string model, int year, double price, std::string warranty_provider)
    : Car(vin, make, model, year, price, "New"), warranty_provider(warranty_provider) {}

NewCar::~NewCar() {}

void NewCar::printDetails() const {
    std::cout << "VIN: " << getVIN() << std::endl;
    std::cout << "Make: " << getMake() << std::endl;
    std::cout << "Model: " << getModel() << std::endl;
    std::cout << "Year: " << getYear() << std::endl;
    std::cout << "Price: $" << getPrice() << std::endl;
    std::cout << "Category: " << getCategory() << std::endl;
    std::cout << "Warranty Provider: " << warranty_provider << std::endl;
}

std::string NewCar::getWarrantyProvider() const {
    return warranty_provider;
}
*/