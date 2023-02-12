#pragma once
#include <iostream>
#include <string>
using namespace std;

class employee {
private:
	string designation;
	float salary;
public:
	string name;
	int age;
	string nic;
	string address;

	void setDesignation(string receiveDesignation) {designation = receiveDesignation;}
	void setSalary(float receiveSalary) {salary = receiveSalary;}
	string getDesignation() {return designation;}
	float getSalary() {return salary;}

	void addEmployee(){
		float tempSalary;
		string tempDesignation;
		cout << "_____________________________________________________ADD EMPLOYEE_______________________________________________________\n" << endl;
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Age: ";
		cin >> age;
		cout << "Enter NIC: ";
		cin >> nic;
		cout << "Enter Address: ";
		cin >> address;
		cout << "Enter Designation: ";
		cin >> tempDesignation;
		setDesignation(tempDesignation);
		cout << "Enter Salary: ";
		cin >> tempSalary;
		setSalary(tempSalary);
	}

	void modifyEmployee() {
		cout << "___________________________________________________MODIFY EMPLOYEE_____________________________________________________\n" << endl;
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Age: ";
		cin >> age;
		cout << "Enter NIC: ";
		cin >> nic;
		cout << "Enter Address: ";
		cin >> address;
	}

	void displayEmployee() {
		cout << "___________________________________________________DISPLAY EMPLOYEE______________________________________________________\n" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "NIC: " << nic << endl;
		cout << "Address: " << address << endl;
		cout << "Designation: " << getDesignation() << endl;
		cout << "Salary: " << salary << endl;
	}
};

