#include "labSix-q4-header.h"
// Defining main and declaring necessary variables
int main(void) {
// Instances of rectangle
	rectangle rOne(12.0, 15.5);
	rectangle rTwo(17.23, 8.9); 
	rectangle rThree(10.2, 13.4);
// Printing area on the screen
	cout << "Area [Rectangle One]: " << rOne.getArea() << " units squared" << endl;
	cout << "Area [Rectangle Two]: " << rTwo.getArea() << " units squared" << endl;
	cout << "Area [Rectangle Three]: " << rThree.getArea() << " units squared" << endl;
}