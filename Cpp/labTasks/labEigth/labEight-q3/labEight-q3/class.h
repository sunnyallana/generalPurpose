#pragma once
// Preprocessing directives
#include <iostream>
#include <string>
using namespace std;
// Defining a class named position that stores coordinates of the 3D plane
class position {
private:
	float x;
	float y;
	float z;
public:
	// Parameterized constructor for position that initializes position
	position(const float receiveX, const float receiveY, const float receiveZ) {
		x = receiveX;
		y = receiveY;
		z = receiveZ;
	}
	// Methods to change X and Y
	void changeX(const int receiveChange) {
		x += receiveChange;
	}
	void changeY(const int receiveChange) {
		y += receiveChange;
	}
	// Methods to get X, Y, and Z
	float getX() const {
		return x;
	}
	float getY() const {
		return y;
	}
	float getZ() const {
		return z;
	}
};


// Defining a class named health that stores its value
class health {
private:
	int healthValue;
public:
	// Parameterized constructor
	health(const int receiveHealthValue) {
		healthValue = receiveHealthValue;
	}
	void changeHealth(int receiveX, int receiveY) {
		healthValue += (receiveX * receiveY);
	}
	int getHealth() const {
		return healthValue;
	}
};


// Multiple inheritence
class character : public position, public health {
private:
	string specialSkill;
public:
	character(const float receiveX, const float receiveY, const float receiveZ, const int receiveHealthValue, const string receiveSpecialSkill) : position(receiveX, receiveY, receiveZ), health(receiveHealthValue) {
		specialSkill = receiveSpecialSkill;
	}
	// A function that moves character and updates health according to the test case provided
	void moveCharacter(const int receiveX, const int receiveY) {
		changeX(receiveX);
		changeY(receiveY);
		changeHealth(receiveX, receiveY);
		cout << "Character moved by " << receiveX << " units in the x axis and " << receiveY << " units in the y axis" << endl;
	}
	// A method to display character's attribute
	void displayCharacter() const {
		cout << "\nX coordinate: " << getX() << endl;
		cout << "Y coordinate: " << getY() << endl;
		cout << "Z coordinate: " << getZ() << endl;
		cout << "Health: " << getHealth() << endl;
		cout << "Special Skill: " << specialSkill << endl << endl;
	}
};