#pragma once
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining a class named "novel" and declaring its attributes
class novel {
private:
	string name;
	string author;
	float cost;
public:
	// Constructor: Initializer List
	novel(string receiveName, string receiveAuthor, float receiveCost) : name(receiveName), author(receiveAuthor), cost(receiveCost) {}
	// Display function
	void display(void) const {
		cout << "\n_________________________________________DISPLAYING NOVEL__________________________________________\n" << endl;
		cout << "Name: " << name << endl;
		cout << "Author: " << author << endl;
		cout << "Cost: " << cost << endl;
	}
	// Destructor
	~novel() {
		cout << "\nDestructor has been called for " << name << endl;
	}
};