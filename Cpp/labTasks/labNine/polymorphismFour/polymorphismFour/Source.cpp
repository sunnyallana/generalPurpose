// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Class named enemy
class enemy {
public:
	virtual void attack() {
        cout << "This method does nothing" << endl;
	}
};
// Some classes which inherit from the class enemy
class dragon : public enemy {
public:
    void attack() {
        cout << "The dragon breathes fire." << endl;
    }
};
class goblin : public enemy {
public:
    void attack() {
        cout << "The goblin swings a club." << endl;
    }
};
class troll : public enemy {
public:
    void attack() {
        cout << "The troll bashes with its fists." << endl;
    }
};

int main(void) {
    dragon dOne;
    goblin gOne;
    troll tOne;

    enemy* eOne[3] = {&dOne, &gOne, &tOne};

    for (int i = 0; i < 3; i++) {
        eOne[i]->attack();
    }
}
