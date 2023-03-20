#include "class.h"
int main(void) {
	fictionBook fOne("All The Bright Places", "Jennifer Niven", "ABC", "Fantasy", "Finch");
	fOne.display();
	fictionBook fTwo("Inheritance Games", "Jennifer Lynn Barner", "ABC", "Fantasy", "Avery");
	fTwo.display();
	cout << "Number of books: " << book::getNumBooks() << endl;
	return 0;
}