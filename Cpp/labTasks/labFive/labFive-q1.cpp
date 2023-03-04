#include "labFive-q1-header.h"
// Defining main
int main(void) {
	int choice;
// Initializing object using parameterized constructor
	inventory iOne("Tyres", 0.0, 0.0, "Best tyres for cars", "Available");
	cout << "1) Calculate Balance\n2) Exit\nEnter choice: ";
	cin >> choice;
	while (choice != 2) {
// Exception handling
		if (choice > 2 || choice < 1) {
			cout << "Invalid Value. Exiting.....";
			exit(1);
		}
		iOne.input();
		iOne.setBalance();
		iOne.display();
		cout << "1) Calculate Balance\n2) Exit\nEnter choice: ";
		cin >> choice;
	}
}