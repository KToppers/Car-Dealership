#include <iostream>
#include <vector>
#include "inventory.h"
using namespace std;

int main() {

    // Creates 10 cars.
    OldCar car1("1J4GZ78Y5PC574443", "Jeep", "Grand Cherokee", 1993, 25000, 40000);
    OldCar car2("1N6AA06B74N530577", "Nissan", "Titan", 2004, 50000, 10000);
    OldCar car3("4S3BH665627630221", "Subaru", "Outback", 2002, 37500, 90000);
    OldCar car4("JT4RN01P0N7057480", "Toyota", "Pickup", 1992, 35000, 200000);
    OldCar car5("JH4DA3340KS005705", "Chevrolet", "Corvette", 1963, 35000, 30000);
    NewCar car6("1GNKVGED5CJ196120", "Tesla", "Model S", 2022, 80000, "Tesla");
    NewCar car7("SCFAC23302B500083", "Volvo", "S70", 2015, 50000, "IFixIt");
    NewCar car8("2HKRM4H51CH631687", "Honda", "Cr. V", 2012, 90000, "The Car Guys");
    NewCar car9("2C3CCAFJ2CH801561", "KIA", "Sorento", 2013, 80000, "Johnny Fix-It");
    NewCar car10("5NPDH4AE6BH023266", "Hyundai", "Elantra", 2011, 55000, "The Mechanic");

    // Create an inventory, then 10 cars.
    Inventory inventory;
    inventory.addCar(&car1);
    inventory.addCar(&car2);
    inventory.addCar(&car3);
    inventory.addCar(&car4);
    inventory.addCar(&car5);
    inventory.addCar(&car6);
    inventory.addCar(&car7);
    inventory.addCar(&car8);
    inventory.addCar(&car9);
    inventory.addCar(&car10);

    // Display the menu.
    while (true) {
        cout << "Welcome to the Dealership! (1-5):" << endl;
        cout << "1. Add a car" << endl;
        cout << "2. Remove a car" << endl;
        cout << "3. Display inventory" << endl;
        cout << "4. Search for a car by price" << endl;
        cout << "5. Exit" << endl;
        cout << " " << endl;

        // User input.
        int choice;
        cin >> choice;

        // Creating new car with inputs.
        if (choice == 1) {
            cout << "Enter the VIN: ";
            string vin;
            cin >> vin;

            cout << "Enter the make: ";
            string make;
            cin >> make;

            cout << "Enter the model: ";
            string model;
            cin >> model;

            cout << "Enter the year: ";
            int year;
            cin >> year;

            cout << "Enter the price: ";
            double price;
            cin >> price;

            // Ask the user whether the car is new or old.
            cout << "Is the car newer? (Y/N): ";
            string newold;
            cin >> newold;

            if (newold == "y" || newold == "Y") {
                cout << "Enter the Warranty Provider: ";
                string warranty;
                cin >> warranty;

                NewCar* newCar = new NewCar(vin, make, model, year, price, warranty);
                inventory.addCar(newCar);
            }
            else {
                cout << "Enter the miles: ";
                double mileage;
                cin >> mileage;

                OldCar* oldCar = new OldCar(vin, make, model, year, price, mileage);
                inventory.addCar(oldCar);
            }
        }
        else if (choice == 2) {
            cout << "Enter the VIN of the car to remove: ";
            string vin;
            cin >> vin;

            // Sells the car.
            inventory.removeCar(vin);
        }
        else if (choice == 3) {
            // Display the inventory.
            inventory.printInventory();
        }
        // Search by price.
        else if (choice == 4) {
            cout << "Enter the minimum price: ";
            double minPrice;
            cin >> minPrice;

            cout << "Enter the maximum price: ";
            double maxPrice;
            cin >> maxPrice;


            vector<Car*> cars = inventory.searchByPriceRange(minPrice, maxPrice);

            // Display the search results (price only)
            if (cars.size() > 0) {
                cout << "Cars sorted from:" << " " << minPrice << " to" << " " << maxPrice << "." << endl;
                for (int i = 0; i < cars.size(); i++) {
                    cars[i]->printDetails();
                }
            }
            else {
                cout << "No cars found." << endl;
            }
        }
        else if (choice == 5) {
            // Exit the program
            cout << "Thank you." << endl;
            break;
        }
        else {
            // Invalid input
            cout << "Invalid input. Try again! (1-5)" << endl;
        }
    }

    return 0;
}
