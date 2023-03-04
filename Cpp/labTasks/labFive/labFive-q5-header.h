#pragma once
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining class
class RentalService {
private:
	string rentalName;
	int reservationNumber;
	string carModel;
	string startDate;
	string endDate;
	float rentalRate;
	static int totalReservations;
	const int maximumReservations = 2;

public:
	// Parameterized constructor which does not allow creation of objects if maximum reservation is reached
	RentalService(string rentalName, int reservationNumber, string carModel, string startDate, string endDate, float rentalRate) {
		if (totalReservations >= maximumReservations) {
			cout << "\nMaximum reservations reached. Cannot add more. Exiting......" << endl;
			exit(1);
		}
		this->rentalName = rentalName;
		this->reservationNumber = reservationNumber;
		this->carModel = carModel;
		this->startDate = startDate;
		this->endDate = endDate;
		this->rentalRate = rentalRate;
		totalReservations++;
	}
	// To reduce reservations as soon as object is destroyed
	~RentalService() {
		totalReservations--;
	}
	// To display reservation details
	void display() const {
		cout << "\n\nRental Name: " << rentalName << endl;
		cout << "Reservation Number: " << reservationNumber << endl;
		cout << "Car Model: " << carModel << endl;
		cout << "Start Date: " << startDate << endl;
		cout << "End Date: " << endDate << endl;
		cout << "Rental Rate: " << rentalRate << endl;
	}
	// To display total reservation in main
	static int getTotalReservations() {
		return totalReservations;
	}
	// To display maximum reservation in main
	const int getMaximumReservations() {
		return maximumReservations;
	}
};
// Initializing static member with zero
int RentalService::totalReservations = 0;