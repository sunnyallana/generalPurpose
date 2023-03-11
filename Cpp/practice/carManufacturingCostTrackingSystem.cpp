#include <iostream>
#include <string>
using namespace std;

class engine {
private:
	float cost;
public:
	engine() {
		cost = 5000;
	}
	float getCost() const {
		return cost;
	}
};
class transmission {
private:
	float cost;
public:
	transmission() {
		cost = 3000;
	}
	float getCost() const {
		return cost;
	}
};
class chassis {
private:
	float cost;
public:
	chassis() {
		cost = 4000;
	}
	float getCost() const {
		return cost;
	}
};
class tyres {
private:
	static float totalTyresCost;
	float cost;
public:
	tyres() {
		cost = 1000;
		totalTyresCost += 1000;
	}
	float getCost() const {
		return cost;
	}
	static float getTotalTyresCost() {
		return totalTyresCost;
	}
};
float tyres::totalTyresCost = 0;



class car {
private:
	engine* Engine;
	transmission* Transmission;
	chassis* Chassis;
	tyres* Tyres;
public:
	car() {
		Engine = new engine;
		Transmission = new transmission;
		Chassis = new chassis;
		Tyres = new tyres[4];
	}
	~car() {
		delete[] Tyres;
	}
	float getTotalCost() {
		return Engine->getCost() + Transmission->getCost() + Chassis->getCost() + tyres::getTotalTyresCost();
	}
};

int main(void) {
	car carOne;
	cout << carOne.getTotalCost();
}