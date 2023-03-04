#include "labFive-q4-header.h"
// Driver code
int main(void) {
	int choice;
// Array of objects with their constructors
	menuItem menuOne[10] = { menuItem("Indian", 12.0, "Momos"), menuItem("Japanese", 15.0, "Sushi"), menuItem("Chinese", 5.6, "Chowmein"), menuItem("Pakistan", 5.0, "Mayo Roll"), menuItem("Korean", 12.0, "Ramen"), menuItem("Turkish", 15.0, "Oak Blood Soup"), menuItem("Russian", 10, "Hamburger"), menuItem("Mexican", 5.0, "Garlic Bread"), menuItem("Thai", 12.0, "Shashlik"), menuItem("German", 5.0, "Pizza") };
	string name, prefferedMeal;
	int age, contact;
	cout << "Enter Name: ";
	cin >> ws;
	getline(cin, name);
	cout << "Enter Age: ";
	cin >> age;
	cout << "Enter contact: ";
	cin >> contact;
	cout << "Enter Preffered Meal: ";
	cin >> ws;
	getline(cin, prefferedMeal);

	customer cOne(name, age, contact, prefferedMeal);

	cOne.display();
	cout << "\nEnter Choice [1-9] to display another menu or [10] to exit: ";
	cin >> choice;
	while (choice != 10) {
		menuOne[choice];
		menuOne[choice].display();
		cout << "\nEnter Choice [1-9] to display another menu or [10] to exit: ";
		cin >> choice;
	}
}