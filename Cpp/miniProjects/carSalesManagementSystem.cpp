#include <iostream>
#include <string>
using namespace std;

const double SALES_TAX = 0.1;

class car {
private:
	string make;
	string model;
	int year;
	double price;
	bool isSold;
public:
	// Default constructor
	car() {
		make = "";
		model = "";
		year = 0;
		price = 0.0;
		isSold = false;
	}
	// Parameterized constructor
	car(string make, string model, int year, double price) {
		this->make = make;
		this->model = model;
		this->year = year;
		this->price = price;
		isSold = false;
	}
	// Getters and setters
	void setMake(const string receiveMake) {
		make = receiveMake;
	}
	void setModel(const string receiveModel) {
		model = receiveModel;
	}
	void setYear(const int receiveYear) {
		year = receiveYear;
	}
	void setPrice(const double receivePrice) {
		price = receivePrice;
	}
	// Static method to calculate total price with sales tax
	static double totalPrice(const car& object) {
		return object.price * (1 + SALES_TAX);
	}
	// Method to display car details
	void displayCar() const {
		cout << "\nMake: " << make << endl;
		cout << "Model: " << model << endl;
		cout << "Year: " << year << endl;
		cout << "Price: " << price << endl;
		cout << "Sold: " << (isSold ? "Not Available" : "Available") << endl;
	}
};

class salesPerson {
private:
	string name;
	car* Car;
	const int maxCars;
	int currentCount = 0;
public:
	// Parameterized constructor
	salesPerson(string name, int receiveMaxCars) : name(name), maxCars(receiveMaxCars) {
		Car = new car[receiveMaxCars];
	}
	// Destructor to free dynamically allocated memory
	~salesPerson() {
		delete[] Car;
	}
	// Method to add car to sales person's inventory
	void addCar(const car& object) {
		if (currentCount == maxCars) {
			cout << "Cannot add more cars. Exiting.....";
			exit(1);
		}
		Car[currentCount] = object;
		currentCount++;
	}
	// Method to calculate total commission earned by the sales person
	double totalCommission() const {
		double total = 0.0;
		for (int i = 0; i < currentCount; i++) {
			total += (car::totalPrice(Car[i]) * 0.10);
		}
		return total;
	}
};

int main(void) {
	salesPerson sOne("Sunny", 10);
	car cOne("Honda", "Civic", 2022, 20000);
	car cTwo("Honda", "City", 2023, 16000);
	sOne.addCar(cOne);
	sOne.addCar(cTwo);
	cout << "Total Commission: " << sOne.totalCommission() << endl;
	cout << "Total Price of Car One: " << car::totalPrice(cOne) << endl;

	return 0;
}
