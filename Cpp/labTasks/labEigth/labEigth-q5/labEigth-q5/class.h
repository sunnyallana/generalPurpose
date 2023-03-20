#pragma once
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Class named vehicle
class vehicle {
private:
	string make;
	string model;
	int year;
public:
	// Parameterized constructor
	vehicle(const string receiveMake, const string receiveModel, const int receiveYear) {
		make = receiveMake;
		model = receiveModel;
		year = receiveYear;
	}
	// Getters
	string getMake() const { return make; }
	string getModel() const { return model; }
	int getYear() const { return year; }
};


// class named car that inherits from vehicle
class car : public vehicle {
private:
	int numberOfDoors;
	float fuelEfficiency;
public:
	// Parameterized constructor
	car(const string receiveMake, const string receiveModel, const int receiveYear, const int receiveNumberOfDoors, const float receiveFuelEfficiency)
		: vehicle(receiveMake, receiveModel, receiveYear) {
		numberOfDoors = receiveNumberOfDoors;
		fuelEfficiency = receiveFuelEfficiency;
	}
	// Getters
	int getNumberOfDoors() const { return numberOfDoors; }
	float getFuelEfficiency() const { return fuelEfficiency; }
};

// class named electric car that inherits from car
class electricCar : public car {
private:
	float batteryLife;
public:
	// Parameterized constructor
	electricCar(const string receiveMake, const string receiveModel, const int receiveYear, const int receiveNumberOfDoors, const float receiveFuelEfficiency, const float receiveBatteryLife)
		: car(receiveMake, receiveModel, receiveYear, receiveNumberOfDoors, receiveFuelEfficiency) {
		batteryLife = receiveBatteryLife;
	}
	// Display function
	void display() const {
		cout << "\nMake: " << getMake() << endl;
		cout << "Model: " << getModel() << endl;
		cout << "Year: " << getYear() << endl;
		cout << "Number Of Doors: " << getNumberOfDoors() << endl;
		cout << "Fuel Efficiency: " << getFuelEfficiency() << endl;
		cout << "Battery life: " << batteryLife << endl;
	}
};