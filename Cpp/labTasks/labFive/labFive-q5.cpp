#include "labFive-q5-header.h"
// Defining main
int main() {
	RentalService rentalOne("Sunny Allana", 1, "Honda", "03-1-2023", "05-1-2023", 50.0);
	rentalOne.display();
	RentalService rentalTwo("Skyrus Leviten", 1, "Toyota", "03-1-2023", "07-1-2023", 90.0);
	rentalTwo.display();
	RentalService rentalThree("Leanord Hofstader", 1, "Honda", "03-1-2023", "06-1-2023", 70.0);
	rentalThree.display();
	cout << "\n\nTotal Reservations: " << RentalService::getTotalReservations() << endl;
	cout << "Maximum Reservations: " << rentalOne.getMaximumReservations() << endl;
}