#include <iostream>
#include <string>
using namespace std;

// Class named Weapon that has some protected attributes
class weapon {
protected:
	string name;
	double damage;
	double weight;
// Pure virtual functions
public:
	weapon(const string name, const double damage, const double weight) {
		this->name = name;
		this->damage = damage;
		this->weight = weight;
	}
	virtual void attack() = 0;
	virtual void reload() = 0;
};

class gun: public weapon {
public:
	gun(const string Name, const double Damage, const double Weight):weapon(Name, Weight, Damage){}
// Method named attack which can be used to shoot other characters
	void attack() {
		cout << "Shooting using " << name << " and dealing " << damage << " damage" << endl;
	}
// Method to reload the gun
	void reload() {
		cout << name << " has been reloaded" << endl;
	}
};

class sword : public weapon {
public:
	sword(const string Name, const double Damage, const double Weight) :weapon(Name, Weight, Damage) {}
	void attack() {
		cout << "Slashing using " << name << " and dealing " << damage << " damage" << endl;
	}
	void parry() {
		cout << "Parrying using " << name << endl;
	}
	void reload() {
		cout << "The " << name << " cannot be reloaded" << endl;
	}
};


class bow : public weapon {
public:
	bow(const string Name, const double Damage, const double Weight) : weapon(Name, Weight, Damage) {}
	void attack() {
		cout << "Shooting Arrows using " << name << " and dealing " << damage << " damage" << endl;
	}
	void reload() {
		cout << "Reloading the bow" << endl;
	}
};

int main(void) {
	gun gunObj("Desert Eagle", 140, 12);
	gunObj.attack();
	gunObj.reload();

	sword swordObj("Katana", 50, 10);
	swordObj.attack();
	swordObj.parry();
	swordObj.reload();
}


