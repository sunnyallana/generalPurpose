#include <iostream>
#include <string>
using namespace std;
class k224149 {
public:
	k224149(int h = 0) : height(h) {}
	int getHeight() const { return height; }
	const void setHeight(int h) { height = h; }
	const void water() { height++; }

private:
	int height;
};

int main() {
	int numFlowers;
	int numDays;
	int watered;
	k224149 fOne[50];

	cout << "Enter number of flowers: ";
	cin >> numFlowers;

	cout << "Enter number of days: ";
	cin >> numDays;

	cout << "Enter number of continuous flowers watered: ";
	cin >> watered;

	// Initialize the fOne with the given number of flowers
	for (int i = 0; i < numFlowers; i++) {
		int h;
		cout << "Enter height of flower " << i + 1 << ": ";
		cin >> h;
		fOne[i] = k224149(h);
	}


	for (int i = 0; i < numDays; i++) {
		for (int j = 0; j < watered; j++) {
			fOne[j].water();
		}
		for (int j = watered; j < numFlowers; j++) {
			fOne[j].water();
		}
	}

	for (int i = 0; i < numFlowers - 1; i++) {
		for (int j = 0; j < numFlowers - 1 - i; j++) {
			if (fOne[j].getHeight() > fOne[j + 1].getHeight()) {
				k224149 temp = fOne[j];
				fOne[j] = fOne[j + 1];
				fOne[j + 1] = temp;
			}
		}
	}

	cout << "Maximized smaller flower: " << fOne[0].getHeight() << endl;

	return 0;
}
