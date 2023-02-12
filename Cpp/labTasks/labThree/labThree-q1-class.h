#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;
class customer{
private:
	// Private attributes
	string NIC;
	int customerID;
	int customerContact;
public:
	// Public attributes
	string firstName;
	string lastName;
	string address;
	string status;
	// Setter functions
	void setNIC(string receiveNIC) { NIC = receiveNIC;}
	void setCustomerID(int receiveCustomerID) {customerID = receiveCustomerID; }
	void setCustomerContact(int receiveCustomerContact) { customerContact = receiveCustomerContact;}
	// Getter functions
	string getNIC() { return NIC; }
	int	getCustomerID() { return customerID; }
	int getCustomerContact() { return customerContact; }
	// Prototype of display function
	void customerInput();
	void customerDetails();

};

void customer::customerInput(){
	string tempFirstName, tempLastName, tempNic, tempAddress, tempStatus;
	int tempCustomerID, tempCustomerContact;
	cout << "____________________________________________Enter Customer Details____________________________________________________\n" << endl;
	cout << "Enter first name: ";
	cin >> tempFirstName;
	firstName = tempFirstName;
	cout << "Enter last name: ";
	cin >> tempLastName;
	lastName = tempLastName;
	cout << "Enter Nic: ";
	cin >> tempNic;
	setNIC(tempNic);
	cout << "Enter Address: ";
	cin >> tempAddress;
	address = tempAddress;
	cout << "Enter Status: ";
	cin >> tempStatus;
	status = tempStatus;
	cout << "Customer ID: ";
	cin >> tempCustomerID;
	setCustomerID(tempCustomerID);
	cout << "Customer Contact: ";
	cin >> tempCustomerContact;
	setCustomerContact(tempCustomerContact);
}


void customer::customerDetails(){
			cout << "___________________________________________Displaying Customer Details_________________________________________________\n" << endl;
			cout << "First Name: " << firstName << endl;
			cout << "Last Name: " << lastName << endl;
			cout << "NIC: " << getNIC() << endl;
			cout << "Address: " << address << endl;
			cout << "Status: " << status << endl;
			cout << "Customer ID: " << getCustomerID() << endl;
			cout << "Customer Contact: " << getCustomerContact() << endl;
}