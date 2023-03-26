// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Class named order
class order {
private:
	string items[100];
	double prices[100];
	int numItems;
	static int totalOrders;
public:
	// Parameterized constructor that receive number of items
	order(const int receiveNumItems) {
		numItems = receiveNumItems;
	}
	// Overloaded addItems() methods
	void addItem(const string receiveItemName, const double receivePrice) {
		items[totalOrders] = receiveItemName;
		prices[totalOrders] = receivePrice;
		totalOrders++;
	}
	void addItem(const string receiveItemName, const string receiveSize, const bool receiveMilk, const double receiveItemPrice) {
		double sizePrice = 0.0, totalPrice = 0.0;
		if (receiveSize == "small") { sizePrice = 2.0; }
		else if (receiveSize == "medium") { sizePrice = 3.0; }
		else if (receiveSize == "large") { sizePrice = 4.0; }
		totalPrice += sizePrice + receiveItemPrice;
		if (receiveMilk == true) {
			totalPrice += 0.50;
		}
		items[totalOrders] = receiveItemName;
		prices[totalOrders] = totalPrice;
		totalOrders++;
	}
	void addItem(const string receiveItemName, const double receivePrice, const int receiveQuantity) {
		items[totalOrders] = receiveItemName;
		prices[totalOrders] = (receivePrice * receiveQuantity);
		totalOrders++;
	}
	void display() const {
		for (int i = 0; i < totalOrders; i++) {
			cout << "\nItem No: " << i + 1 << endl;
			cout << "Item Name: " << items[i] << endl;
			cout << "Total Price: " << prices[i] << endl;
		}
	}


};
int order::totalOrders = 0;

int main(void) {
	order oOne(3);
	oOne.addItem("Biscuits", 12.0);
	oOne.addItem("Coffee", "small", true, 12.20);
	oOne.addItem("Tea", 10, 5);
	oOne.display();
	return 0;
}