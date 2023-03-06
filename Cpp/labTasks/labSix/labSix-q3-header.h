#pragma once
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining a class named customer and declaring its attributes
class customer {
private:
	string name;
	int accountNumber;
	double balance;
public:
	// Parameterized Constructor
	customer(string name, int accountNumber, double balance) {
		this->name = name;
		this->accountNumber = accountNumber;
		this->balance = balance;
	}
	// Getter functions
	string getName() const {
		return name;
	}
	int getAccountNumber() const {
		return accountNumber;
	}
	double getBalance() const {
		return balance;
	}
};
// Defining a class named bank and declaring its attributes
class bank {
private:
	static int numberOfCustomers;
public:
	static void addCustomer() {
		numberOfCustomers++;
	}
	int getNumberOfCustomers() const {
		return numberOfCustomers;
	}
};
// Initializing static membe with 0
int bank::numberOfCustomers = 0;