#include "labSeven-q3-header.h"
int main(void) {
	customer cOne("Sunny", 1001, 500);
	bank bOne;
	bank::addCustomer();
	bank::addCustomer();
	cout << "Number Of Customers: " << bOne.getNumberOfCustomers() << endl;
}