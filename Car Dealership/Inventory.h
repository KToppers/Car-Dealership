#include "car.h"
#include <vector>

class Inventory {
private:
	vector<Car*> cars;

public:
	Inventory();
	~Inventory();

	void addCar(Car* car);
	void removeCar(string vin);
	void printInventory() const;
	vector<Car*> searchByMake(string make);
	vector<Car*> searchByPriceRange(double minPrice, double maxPrice);
};