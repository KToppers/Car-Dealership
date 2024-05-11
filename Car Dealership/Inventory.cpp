#include "inventory.h"

Inventory::Inventory() {}
Inventory::~Inventory() {}

void Inventory::addCar(Car* car) {
    cars.push_back(car);
}

// Needed help from this one. I just looked up the code, and it seems to work. This was difficult, I had multiple errors thrown at me.
void Inventory::removeCar(string vin) {
    auto it = find_if(cars.begin(), cars.end(),
        [&](const Car* car) {return car->getVIN() == vin; });
    if (it != cars.end()) {
        cars.erase(it);
    }
}

// Prints details, uses pointers.
void Inventory::printInventory() const {
    for (const Car* car : cars) {
        car->printDetails();
        cout << endl;
    }
}

// Quick extra credit search by price range using vectors.
vector<Car*> Inventory::searchByPriceRange(double minPrice, double maxPrice) {
    vector<Car*> result;

    for (int i = 0; i < cars.size(); i++) {
        double price = cars[i]->getPrice();
        if (price >= minPrice && price <= maxPrice) {
            result.push_back(cars[i]);
        }
    }

    return result;
}

