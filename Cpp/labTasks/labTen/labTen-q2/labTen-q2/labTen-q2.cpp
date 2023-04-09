// Preprocessing directives
#include <iostream>
#include <string>
using namespace std;
// Character class
class character {
private:
	int health;
	int strength;
	int speed;
public:
	// Default constructor
	character() {
		health = NULL;
		strength = NULL;
		speed = NULL;
	}
	// Parameterized constructor
	character(const int& health, const int& strength, const int& speed) {
		this->health = health;
		this->strength = strength;
		this->speed = speed;
	}
	// Methods declaration
	friend bool compareCharacters(const character& cOne, const character& cTwo);
	friend character& operator + (const character& cOne, const character& cTwo);
	friend ostream& operator <<(ostream& object, const character& c);
};
// overloaded operator <<
ostream& operator <<(ostream& object, const character& c) {
	object << "\n\n______________________DISPLAYING OBJECT________________________\n\n" << endl;
	object << "Health: " << c.health << endl;
	object << "Strength: " << c.strength << endl;
	object << "Speed: " << c.speed << endl;
	return object;
}
// Method to compare characters
bool compareCharacters(const character& cOne, const character& cTwo) {
	if ((cOne.health > cTwo.health) && (cOne.strength > cTwo.strength) && (cOne.speed > cTwo.speed)) {
		return true;
	}
	else {
		return false;
	}
}
// Overloaded operator +
character& operator + (const character& cOne, const character& cTwo) {
	character temp;
	temp = character((cOne.health + cTwo.health), (cOne.strength + cTwo.strength), (cOne.speed + cTwo.speed));
	return temp;
}

class game {
private:
	character currentCharacter;
public:
	friend character;
	void setCurrentCharacter(const character& object) {
		currentCharacter = object;
		cout << "Current character has been changed" << endl;
	}
};

int main(void) {
	character cOne(10, 20, 30), cTwo(20, 30, 40);
	// Ternary statement to print the relevant message on comparision
	cout << (compareCharacters(cOne, cTwo) ? "All attributes are equal" : "Attributes are not equal") << endl;
	game gOne;
	gOne.setCurrentCharacter(cTwo);
	character cThree = cOne + cTwo;
	cout << cThree;
}
