#include <iostream>
using namespace std;

// Base class with everything being setup, to be inherited later.
class Car {
protected:
    string VIN;
    string make;
    string model;
    int year;
    double price;
    string category;

public:
    Car();
    Car(string vin, string make, string model, int year, double price, string category);
    virtual ~Car();

    virtual void printDetails() const;

    string getVIN() const;
    string getMake() const;
    string getModel() const;
    int getYear() const;
    double getPrice() const;
    string getCategory() const;
};

// Old car class, inherited by Car.
class OldCar:public Car {
private:
    int mileage;

public:
    OldCar(string vin, string make, string model, int year, double price, int mileage);
    ~OldCar();

    void printDetails() const override;

    int getMileage() const;
};

// New Car class, inherited by Car.
class NewCar : public Car {
private:
    string warranty ;

public:
    NewCar(string vin, string make, string model, int year, double price, string warranty);
    ~NewCar();

    void printDetails() const override;

    string getWarrantyProvider() const;
};

