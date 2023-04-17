// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;


class animal {
private:
	string name;
public:
	animal() {
		name = "";
	}
	void setName(string receiveName) {
		name = receiveName;
	}

	string getName() const { return name; }

	animal(string receiveName) {
		name = receiveName;
	}

	void foundIn() const {
		cout << "An animal can be found in many places" << endl;
	}
};

class mammal : virtual public animal {
public:
	mammal() {}
	mammal(string receiveName) : animal(receiveName) {}
	void foundIn() const {
		cout << "A mammal can be found in water or on land" << endl;
	}
};

class marineAnimal : virtual public animal {
public:
	marineAnimal() {}
	marineAnimal(string receiveName) : animal(receiveName) {}
	void foundIn() const {
		cout << "A marine animal can only be found in bodies of water" << endl;
	}
};


class whales : public mammal, public marineAnimal {
private:
	string whaleType;
public:
	whales() {
		whaleType = "";
	}
	whales(string receiveName, string receiveType) : animal(receiveName) {
		whaleType = receiveType;
	}
	void foundIn() const {
		cout << "A " << whaleType << " can only be found in the ocean." << endl;
	}
};
// Driver code
int main(void) {
	whales whaleBaleen("Whale", "Baleen");
	whaleBaleen.foundIn();
	return 0;
}

