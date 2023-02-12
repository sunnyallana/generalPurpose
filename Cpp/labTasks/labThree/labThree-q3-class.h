#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class customer {
private:
	int lastAccountNumber;
	int signature;
	string address;
public:
	string firstName;
	string LastName;
	int age;
	int contact;

	void setLastAccountNumber(int receiveLastAccountNumber) {lastAccountNumber = receiveLastAccountNumber;}
	void setSignature(int receiveSignature) {signature = receiveSignature;}
	void setAddress(string receiveAddress) {address = receiveAddress;}
	int getLastAccountNumber() {return lastAccountNumber;}
	int getSignature() {return signature;}
	string getAddress() {return address;}

	void addCustomer() {
		int tempLastCurrentAccount, tempCurrentAccount, tempSignature;
		string tempAddress;
		cout << "\n_________________________________________________Add Customer_______________________________________________________\n\n";
		cout << "Enter Last Account Number: ";
		cin >> tempLastCurrentAccount;
		setLastAccountNumber(tempLastCurrentAccount);
		do {
			cout << "Enter current account number: ";
			cin >> tempCurrentAccount;
		} while (tempCurrentAccount == tempLastCurrentAccount);
		cout << "Enter signature: ";
		cin >> tempSignature;
		setSignature(tempSignature);
		cout << "Enter address: ";
		cin >> tempAddress;
		setAddress(tempAddress);
		cout << "Enter first name: ";
		cin >> firstName;
		cout << "Enter last name: ";
		cin >> LastName;
		do {
			cout << "Enter age: ";
			cin >> age;
		} while (age < 18);
		cout << "Enter Contact: ";
		cin >> contact;
	}

	void displayCustomer() {
		cout << "\n_______________________________________________Display Customer_____________________________________________________\n\n";
		cout << "Last Account Number: " << getLastAccountNumber() << endl;
		cout << "Signature: " << getSignature() << endl;
		cout << "Address: " << getAddress() << endl;
		cout << "First Name: " << firstName << endl;
		cout << "Last Name: " << LastName << endl;
		cout << "Age: " << age << endl;
		cout << "Contact: " << contact << endl;
	}
};



class account {
public:
	string accountTitle;
	int accountNumber;
	string accountType;
	int totalRange;

private:
	string status;
	void setStatus(string receiveStatus) {
		 status = receiveStatus;
	}
	string getStatus() {
		return status;
	}
public:
	void addAccount() {
		string tempStatus;
		cout << "\n_________________________________________________Add Account________________________________________________________\n\n";
		cout << "Enter Account Title: ";
		cin >> accountTitle;
		cout << "Enter Account Number: ";
		cin >> accountNumber;
		cout << "Enter Account Type: ";
		cin >> accountType;
		cout << "Enter Total Range: ";
		cin >> totalRange;
		cout << "Enter Status: ";
		cin >> tempStatus;
		setStatus(tempStatus);
	}

	void displayAccount() {
		cout << "\n________________________________________________Display Account_____________________________________________________\n\n";
		cout << "Account Title: " << accountTitle << endl;
		cout << "Account Number: " << accountNumber << endl;
		cout << "Account Type: " << accountNumber << endl;
		cout << "Total Range: " << totalRange << endl;
		cout << "Status: " << getStatus() << endl;
	}
};	


class transaction {
public:
	string date;
	string type;
	int amount;
	int fee;

	void addTransaction() {
		cout << "\n________________________________________________Add Transaction_____________________________________________________\n\n";
		cout << "Enter Date: ";
		cin >> date;
		cout << "Enter Type: ";
		cin >> type;
		cout << "Enter Amount: ";
		cin >> amount;
		cout << "Enter Fee: ";
		cin >> fee;
	}

	void displayAccount() {
		cout << "\n______________________________________________Display Transaction___________________________________________________\n\n";
		cout << "Date: " << date << endl;
		cout << "Type: " << type << endl;
		cout << "Amount: " << amount << endl;
		cout << "Fee: " << fee << endl;
	}
};