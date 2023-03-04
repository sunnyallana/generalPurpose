#pragma once
// Preprocessing directives
#include <iostream>
#include <string>
using namespace std;

class event {
private:
	string name;
	int id;
	string date;
	string time;
	string venue;
	string category;
	static int totalEvents;
	const int maxEvents = 2;

public:
	// Parameterized constructor
	event(string name, int id, string date, string time, string venue, string category) {
		if (totalEvents >= maxEvents) {
			cout << "\n\nMaximum number of events exceeded. Exiting....." << endl;
			exit(1);
		}
		this->name = name;
		this->id = id;
		this->date = date;
		this->time = time;
		this->venue = venue;
		this->category = category;
		totalEvents++;

	}
	// Destructor
	~event() {
		totalEvents--;
	}
	// Display function
	void display() const {
		cout << "\n\nEvent Name: " << name << endl;
		cout << "Event ID: " << id << endl;
		cout << "Date: " << date << endl;
		cout << "Time: " << time << endl;
		cout << "Venue: " << venue << endl;
		cout << "Category: " << category << endl;
	}
};

int event::totalEvents = 0;
