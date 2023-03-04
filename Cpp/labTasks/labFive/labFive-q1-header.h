#pragma once
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining a class named "inventory" and declaring its attributes
class inventory {
private:
	string name;
	float debitAmount;
	float creditAmount;
	float balance;
public:
	string description;
	string status;
	// Parameterized Constructor
	inventory(string name, float debitAmount, float creditAmount, string description, string status) {
		this->name = name;
		this->debitAmount = debitAmount;
		this->creditAmount = creditAmount;
		this->description = description;
		this->status = status;
	}
	// Setters Function
	void setName(const string name) { this->name = name; }
	void setDebitAmount(const float debitAmount) { this->debitAmount = debitAmount; }
	void setCreditAmount(const float creditAmount) { this->creditAmount = creditAmount; }
	void setBalance(void) { balance = debitAmount - creditAmount; }
	// Getters Function
	string getName(void) const { return name; }
	float getDebitAmount(void) const { return debitAmount; }
	float getCreditAmount(void) const { return creditAmount; }
	float getBalance(void) const { return balance; }
	// Function to input function
	void input(void) {
		cout << "Enter Name: ";
		cin >> ws;
		getline(cin, name);
		cout << "Enter Debit Amount: ";
		cin >> debitAmount;
		cout << "Enter Credit Amount: ";
		cin >> creditAmount;
		cout << "Enter Description: ";
		cin >> ws;
		getline(cin, description);
		cout << "Enter Status: ";
		cin >> ws;
		getline(cin, status);
		cout << "\n";
	}
	// Function to display function
	void display(void) const {
		cout << "\n";
		cout << "Name: " << name << endl;
		cout << "Debit Amount: " << debitAmount << endl;
		cout << "Credit Amount: " << creditAmount << endl;
		cout << "Description: " << description << endl;
		cout << "Status: " << status << endl;
		cout << "Balance: " << balance << endl;
		cout << "\n";
	}
};