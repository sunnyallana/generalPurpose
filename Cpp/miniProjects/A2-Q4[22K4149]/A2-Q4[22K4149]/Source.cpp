#include <iostream>
#include <string>
using namespace std;


class gameObject {
private:
	const string name;
	int x;
	int y;
public:
	gameObject() : name("22K-4149") {
		x = NULL;
		y = NULL;
	}
	gameObject(const int& receiveX, const int& receiveY) : name("22K-4149") {
		x = receiveX;
		y = receiveY;
	}

	void setX(const int& receiveX) { x = receiveX; }
	void setY(const int& receiveY) { y = receiveY; }

	string getName() const { return name; }
	int getX() const { return x; }
	int getY() const { return y; }

	virtual void draw() const {
		cout << "Name: " << endl;
		cout << "X: " << endl;
		cout << "Y: " << endl;
	}
};


class player : protected gameObject {
private:
	int health;
public:
	player(const int& receiveX, const int& receiveY, const int& receiveHealth) : gameObject(receiveX, receiveY) {
		health = receiveHealth;
	}

	void setHealth(const int& receiveHealth) { health = receiveHealth; }
	int getHealth() const { return health; }

	void draw() const {
// Extension case of over-riding
		gameObject::draw();
		cout << "Health: " << health << endl;
	}
};

class enemy : protected gameObject {
private:
	int damage;
public:
	enemy(const int& receiveX, const int& receiveY, const int& receiveDamage) : gameObject(receiveX, receiveY) {
		damage = receiveDamage;
	}

	void setDamage(const int& receiveDamage) { damage = receiveDamage; }
	int getDamage() const { return damage; }

	void draw() const {
// Extension case of over-riding
		gameObject::draw();
		cout << "Damage: " << damage << endl;
	}
};

class powerUp : protected gameObject {
private:
	string effect;
public:
	powerUp(const int& receiveX, const int& receiveY, const string& receiveEffect) : gameObject(receiveX, receiveY) {
		effect = receiveEffect;
	}

	void setEffect(const string& receiveEffect) { effect = receiveEffect; }
	string getEffect() const { return effect; }

	void draw() const {
// Extension case of over-riding
		gameObject::draw();
		cout << "Effect: " << effect << endl;
	}
};

class game {
private:
	static int countObject;
	const int sizeArray;
	gameObject* Game = nullptr;
public:
	game(const int& receiveSize = 0) : sizeArray(receiveSize), Game(new gameObject[sizeArray])  {}
	~game() { delete[] Game; }

	void addToGame(const gameObject& receiveObject) {
		Game[countObject] = receiveObject;
		countObject++;
	}
	void drawAll() const {

	}
};
int game::countObject = 0;