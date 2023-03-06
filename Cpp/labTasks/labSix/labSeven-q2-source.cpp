#include "labSeven-q2-header.h"
int main(void) {
	book bOne("All The Bright Places", "Jennifer Niven", 10.34, 2);
	purchase pOne("Sunny", 1001, &bOne, 2);
	pOne.printPurchase();
}