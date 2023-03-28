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
		x = 0;
		y = 0;
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
		cout << "Name: " << name << endl;
		cout << "X: " << x << endl;
		cout << "Y: " << y << endl;
	}
};


class player : public gameObject {
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
		cout << "Health: " << health << endl << endl;
	}
	void operator==(const player& otherPlayer) {
		if (this->getHealth() == otherPlayer.getHealth()) {
			cout << "Both players' health is equal" << endl;
		}
		else if (this->getHealth() > otherPlayer.getHealth()) {
			cout << getName() << " (Calling Object) has greater health than " << otherPlayer.getName() << " (Other Object)" << endl;
		}
		else {
			cout << getName() << " (Calling Object) has lesser health than " << otherPlayer.getName() << " (Other Object)" << endl;
		}
	}
};

class enemy : public gameObject {
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
		cout << "Damage: " << damage << endl << endl;
	}
};

class powerUp : public gameObject {
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
		cout << "Effect: " << effect << endl << endl;
	}
};

class game {
private:
	static int countObject;
	const int sizeArray;
	gameObject** Game;
public:
	game(const int& receiveSize = 0) : sizeArray(receiveSize), Game(new gameObject*[sizeArray]) {}
	~game() { delete[] Game; }

	void addToGame(gameObject& receiveObject) {
		if (sizeArray == game::countObject) {
			cout << "Cannot add more objects. Exiting....." << endl;
			exit(1);
		}
		Game[countObject++] = &receiveObject;
	}
	void drawAll() const {
		for (int i = 0; i < game::countObject; i++) {
			Game[i]->draw();
		}
	}
};
int game::countObject = 0;

int main() {
	player pOne(2, 3, 100);
	player pTwo(9, 8, 100);
	enemy eOne(5, 4, 50);
	powerUp pUOne(6, 7, "Invisibility");

	game gOne(4);

	gOne.addToGame(pOne);
	gOne.addToGame(pTwo);
	gOne.addToGame(eOne);
	gOne.addToGame(pUOne);
	gOne.drawAll();

	pOne == pTwo;

	return 0;
}


