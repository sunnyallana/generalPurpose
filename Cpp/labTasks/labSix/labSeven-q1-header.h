#pragma once
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining a class named teacher and declaring its attributes
class teacher{
private:
	string teacherName;
	string email;
	string address;
public:
// Parameterized Constructor
	teacher(string teacherName, string email, string address) {
		this->teacherName = teacherName;
		this->email = email;
		this->address = address;
	}
// A method to print teacher's details
	inline void printDetails(void) const {
		cout << "Teacher Name: " << teacherName << endl;
		cout << "Email: " << email << endl;
		cout << "Address: " << address << endl;
	}
};
// Defining a class named student and declaring its attributes
class student {
private:
	string studentName;
	int rollNumber;
	float marks;
	teacher* t;
public:
	// A paramterized constructor
	student(string studentName, int rollNumber, float marks, teacher* t) {
		this->studentName = studentName;
		this->rollNumber = rollNumber;
		this->marks = marks;
		this->t = t;
	}
	// A method to display both student and teacher details
	inline void displayStudentTeacherDetails() const {
		cout << "\n\nStudent Name: " << studentName << endl;
		cout << "Roll Number: " << rollNumber << endl;
		cout << "Marks: " << marks << endl;
		t->printDetails();
	}
};
	