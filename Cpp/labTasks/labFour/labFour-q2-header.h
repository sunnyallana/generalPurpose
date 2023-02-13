// Preprocessing Directives
#pragma once
#include <iostream>
#include <string>
using namespace std;
// Defining class named event and declaring its attributes
class event {
private:
	string eventName;
	string eventVenue;
	string menu;
	float cost;
public: 
	// Parameterized Constructor 
	event(string tempEventName, string tempEventVenue, string tempMenu, float tempCost) : eventName(tempEventName), eventVenue(tempEventVenue), menu(tempMenu), cost(tempCost){}
	// Display function to display objects
	void display() {
		cout << "Event Name: " << eventName << endl;
		cout << "Event Venue: " << eventVenue << endl;
		cout << "Menu: " << menu << endl;
		cout << "Cost: " << cost << endl;
	}
};