#include "car.h"
#include <iostream>

Car::Car() {
    VIN = "";
    make = "";
    model = "";
    year = 0;
    price = 0;
    category = "";
}

Car::Car(string vin, string make, string model, int year, double price, string category) {
    VIN = vin;
    this->make = make;
    this->model = model;
    this->year = year;
    this->price = price;
    this->category = category;
}

Car::~Car() {}

void Car::printDetails() const {
    cout << "Make: " << make << "\n";
    cout << "Model: " << model << "\n";
    cout << "Year: " << year << "\n";
    cout << "Price: " << price << "\n";
    cout << "Category: " << category << "\n";
}

string Car::getVIN() const {
    return VIN;
}

string Car::getMake() const {
    return make;
}

string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

double Car::getPrice() const {
    return price;
}

string Car::getCategory() const {
    return category;
}

OldCar::OldCar(string vin, string make, string model, int year, double price, int mileage)
    : Car(vin, make, model, year, price, "Old"), mileage(mileage) {}

OldCar::~OldCar() {}

void OldCar::printDetails() const {
    cout << "VIN: " << getVIN() << endl;
    cout << "Make: " << getMake() << endl;
    cout << "Model: " << getModel() << endl;
    cout << "Year: " << getYear() << endl;
    cout << "Price: $" << getPrice() << endl;
    cout << "Category: " << getCategory() << endl;
    cout << "Mileage: " << mileage << endl;
}

int OldCar::getMileage() const {
    return mileage;
}

NewCar::NewCar(string vin, string make, string model, int year, double price, string warranty)
    : Car(vin, make, model, year, price, "New"), warranty (warranty) {}

NewCar::~NewCar() {}

void NewCar::printDetails() const {
    cout << "VIN: " << getVIN() << endl;
    cout << "Make: " << getMake() << endl;
    cout << "Model: " << getModel() << endl;
    cout << "Year: " << getYear() << endl;
    cout << "Price: $" << getPrice() << endl;
    cout << "Category: " << getCategory() << endl;
    cout << "Warranty Provider: " << warranty  << endl;
}

string NewCar::getWarrantyProvider() const {
    return warranty ;

}