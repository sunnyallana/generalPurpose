#pragma once
#include <iostream>
#include <string>
using namespace std;

// A class named wallet which would be aggregated to wizard since wizard would "have a" wallet. Has-a relationship
class wallet {
private:
	static int coins;
public:
	int addCoins() {
		int choice;
		cout << "What coin would you like to buy:\n1) 50\n2) 100\n3) 150\n";
		cout << "Enter Choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			coins += 50;
			cout << "\n50 coins added to the wallet" << endl;
			break;
		case 2:
			coins += 100;
			cout << "\n100 coins added to the wallet" << endl;
			break;
		case 3:
			coins += 150;
			cout << "\n150 coins added to the wallet" << endl;
			break;
		default:
			cout << "Invalid Value" << endl;
		}
		return coins;
	}
};
int wallet::coins = 0;


// Class named character
class character {
private:
	int health;
	int damage;
public:
	character(const int receiveHealth, const int receiveDamage) {
		health = receiveHealth;
		damage = receiveDamage;
	}
	void displayCharacter() const {
		cout << "Health: " << health << endl;
		cout << "Damage: " << damage << endl;
	}
	int getHealth() const {
		return health;
	}
	int getDamage() const {
		return damage;
	}
	// Function that updates health and damage
	void increamentHealthDecreamentDamage(int receiveValue) {
		health += receiveValue;
		damage -= receiveValue;
	}
};

// Enemy class that inherits from character
class enemy : public character {
private:
	int stage;
public:
	enemy(const int receiveHealth, const int receiveDamage, const int receiveStage) : character(receiveHealth, receiveDamage) {
		stage = receiveStage;
	}
	void displayEnemy() const {
		cout << "Health: " << getHealth() << endl;
		cout << "Damage: " << getDamage() << endl;
		cout << "Stage: " << stage << endl;
	}
};

// Player class that inherits from character
class player : public character {
private:
	int id;
public:
	player(const int receiveHealth, const int receiveDamage, const int receiveId) : character(receiveHealth, receiveDamage) {
		id = receiveId;
	}
	void displayPlayer() const {
		cout << "ID: " << id << endl;
		cout << "Health: " << getHealth() << endl;
		cout << "Damage: " << getDamage() << endl;
	}
	int getId() const {
		return id;
	}
};

// Wizard class that inherits from player
class wizard : public player {
private:
	int magicPower;
	string spells;
	wallet* Wallet; // Because wizard "has a" wallet
public:
	wizard(const int receiveHealth, const int receiveDamage, const int receiveId, const int receiveMagicPower, const string receiveSpells) : player(receiveHealth, receiveDamage, receiveId) {
		Wallet = new wallet; // Allocating memory to the pointer "Wallet"
		magicPower = receiveMagicPower;
		spells = receiveSpells;
	}

	~wizard() {
		delete[] Wallet; // Deallocating memory using delete
	}

	void increaseHealth() {
		increamentHealthDecreamentDamage(Wallet->addCoins());
	}

	void displayWizard() {
		cout << "\nHealth: " << getHealth() << endl;
		cout << "Damage: " << getDamage() << endl;
		cout << "ID: " << getId() << endl;
		cout << "Magic Power: " << magicPower << endl;
		cout << "Spells: " << spells << endl << endl;
		// Changes health and damage if following condition is met and calls this function again recursively until condition becomes false
		if (getHealth() < 100 && getDamage() > 300) {
			increaseHealth();
			displayWizard();
		}
	}
};