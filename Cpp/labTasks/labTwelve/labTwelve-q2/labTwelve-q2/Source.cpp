#include <iostream>
#include <string>
using namespace std;

class vehicle {
protected:
	double basicCost;
public:
	vehicle(const double basicCost) {
		this->basicCost = basicCost;
	}
	virtual void displayDetails() const = 0;
	virtual double calculateCost(double taxRatePercentage) const = 0;
};

class car : public vehicle {
private:
	int numDoors;
public:
	car(const int numDoors, const double basicCost):vehicle(basicCost) {
		this->numDoors = numDoors;
	}
	void displayDetails() const {
		cout << "Number Of Doors: " << numDoors << endl;
	}
	double calculateCost(double taxRatePercentage) const {
		return  basicCost * (1.0 + taxRatePercentage);
	}
};

int main(void) {
	cout << "\n___________________________________Welcome to the Car Rental Service_______________________\n\n" << endl;
	car cOne(4, 200);
	cOne.displayDetails();
	cout << "Total Rental Cost ($): " << cOne.calculateCost(10.0/100) << endl;
}

