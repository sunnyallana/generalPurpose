// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
class customer {
private:
	string name;
	int age;
	int contact;
	string prefferedMeal;
public:
	// Parameterized constructor
	customer(string name, int age, int contact, string prefferedMeal) {
		this->name = name;
		this->age = age;
		this->contact = contact;
		this->prefferedMeal = prefferedMeal;
	}
	// Function to input
	void input(void) {
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
	}

	void display() const {
		cout << endl << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Contact: " << contact << endl;
		cout << "Preferred Meal: " << prefferedMeal << endl;
	}

	~customer() {
		cout << "\nMemory Freed\n";
	}
};
class menuItem {
private:
	string name;
	float cost;
	string description;
public:
	menuItem(string name, float cost, string description) {
		this->name = name;
		this->cost = cost;
		this->description = description;
	}
	void display() const {
		cout << endl << "Name: " << name << endl;
		cout << "Cost: " << cost << endl;
		cout << "Description: " << description << endl;
	}
	~menuItem() {}
};