#pragma once
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Class named person
class person {
private:
	string name;
	int age;
public:
	// Parameterized constructor
	person(const string receiveName, const int receiveAge) {
		name = receiveName;
		age = receiveAge;
	}
	string getName() const { return name; }
	int getAge() const { return age; }
};
// class named student that inherits from person
class student : public person {
private:
	string studentId;
	float gradeLevel;
public:
	// Parameterized constructor
	student(const string receiveName, const int receiveAge, const string receiveStudentId, const float receiveGradeLevel) : person(receiveName, receiveAge) {
		studentId = receiveStudentId;
		gradeLevel = receiveGradeLevel;
	}
	// Getters
	string getStudentId() const { return studentId; }
	float getGradeLevel() const { return gradeLevel; }
};

// Class named teacher that inherits from person
class teacher : public person {
private:
	string subject;
	int roomNumber;
public:
	// Parameterized constructor
	teacher(const string receiveName, const int receiveAge, const string receiveSubject, const int receiveRoomNumber) : person(receiveName, receiveAge) {
		subject = receiveSubject;
		roomNumber = receiveRoomNumber;
	}
	// Getters
	string getSubject() const { return subject; }
	int getRoomNumber() const { return roomNumber; }
	string GetName() const { return getName(); }
	int GetAge() const { return getAge(); }
};
// class named graduate student that inherits from student and teacher
class graduateStudent : public student, public teacher {
public:
	// Parameterized constructor
	graduateStudent(const string receiveName, const int receiveAge, const string receiveStudentId, const float receiveGradeLevel, const string receiveSubject, const int receiveRoomNumber)
		: student(receiveName, receiveAge, receiveStudentId, receiveGradeLevel), teacher(receiveName, receiveAge, receiveSubject, receiveRoomNumber) {}
	// Method to display graduate student's details
	void display() const {
		cout << "Name: " << GetName() << endl;
		cout << "Age: " << GetAge() << endl;
		cout << "Student Id: " << getStudentId() << endl;
		cout << "Grade Level: " << getGradeLevel() << endl;
		cout << "Subject: " << getSubject() << endl;
		cout << "Room Number: " << getRoomNumber() << endl;
	}
};