#include "class.h"
int main(void) {
	character cOne(12.0, 13.9, 15.9, 57, "Invisibility");
	cOne.displayCharacter();
	cOne.moveCharacter(2, 4.5);
	cOne.displayCharacter();
}