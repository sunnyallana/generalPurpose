#include <iostream>
#include <string>
using namespace std;

class juice {
private:
	double price;
	string ingredients;
	string taste;
	static int countJuice;
public:
	juice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste) 
		: price(receivePrice), ingredients(receiveIngredients), taste(receiveTaste) {
		increamentCount();
	}

	void setPrice(const double& receivePrice) {
		price = receivePrice;
	}
	double getPrice() const {
		return price;
	}
	void setIngredients(const string& receiveIngredients) {
		ingredients = receiveIngredients;
	}
	string getIngredients() const {
		return ingredients;
	}
	void setTaste(const string& receiveTaste) {
		taste = receiveTaste;
	}
	string getTaste() const {
		return taste;
	}
	virtual void printDetails() {
		cout << "Price: " << price << endl;
		cout << "Ingredients: " << ingredients << endl;
		cout << "Taste: " << taste << endl;
	}
	static void increamentCount() {
		countJuice++;
	}
	static int getCount() {
		return countJuice;
	}
};
int juice::countJuice = 0;

class fruitJuice : public juice {
private:
	string season;
	static int fruitJuiceCount;
public:
	fruitJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveSeason)
		: juice(receivePrice, receiveIngredients, receiveTaste) {
		season = receiveSeason;
		fruitJuiceCount++;
	}
	void setSeason(const string& receiveSeason) {
		season = receiveSeason;
	}
	string getSeason() const {
		return season;
	}
	void printDetails() {
		juice::printDetails();
		cout << "Season: " << season << endl;
	}
	static int getFCount() {
		return fruitJuiceCount;
	}
};
int fruitJuice::fruitJuiceCount = 0;

class vegetableJuice : public juice {
private:
	string origin;
	static int vegetableJuiceCount;
public:
	vegetableJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveOrigin)
		: juice(receivePrice, receiveIngredients, receiveTaste) {
		origin = receiveOrigin;
		vegetableJuiceCount++;
	}
	void setOrigin(const string& receiveOrigin) {
		origin = receiveOrigin;
	}
	string getOrigin() const {
		return origin;
	}
	void printDetails() {
		juice::printDetails();
		cout << "Origin: " << origin << endl;
	}
	static int getVCount() {
		return vegetableJuiceCount;
	}
};
int vegetableJuice::vegetableJuiceCount = 0;

class mixedJuice : public juice {
private:
	static int mixedJuiceCount;
public:
	mixedJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste)
		: juice(receivePrice, receiveIngredients, receiveTaste) {
		mixedJuiceCount++;
	}
	void printDetails() {
		juice::printDetails();
	}
	static int getMCount() {
		return mixedJuiceCount;
	}
};
int mixedJuice:: mixedJuiceCount = 0;





class citrusJuice : public fruitJuice {
private:
	static int citrusCount;
public:
	citrusJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveSeason)
		: fruitJuice(receivePrice, receiveIngredients, receiveTaste, receiveSeason) {}
	void printDetails() {
		cout << "22K-4149 Sunny also likes Citrus Juice" << endl;
		fruitJuice::printDetails();
	}
};
int citrusJuice::citrusCount = 0;

class berryJuice : public fruitJuice {
private:
	static int berryCount;
public:
	berryJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveSeason)
		: fruitJuice(receivePrice, receiveIngredients, receiveTaste, receiveSeason) {}
	void printDetails() {
		cout << "22K-4149 Sunny also likes Berry Juice" << endl;
		fruitJuice::printDetails();
	}
};
int berryJuice::berryCount = 0;

class tropicalJuice : public fruitJuice {
private:
	static int tropicalCount;
public:
	tropicalJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveSeason)
		: fruitJuice(receivePrice, receiveIngredients, receiveTaste, receiveSeason) {}
	void printDetails() {
		cout << "22K-4149 Sunny also likes Tropical Juice" << endl;
		fruitJuice::printDetails();
	}
};
int tropicalJuice::tropicalCount = 0;

class leafyGreenJuice : public vegetableJuice {
private:
	static int leafyCount;
public:
	leafyGreenJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveOrigin)
		: vegetableJuice(receivePrice, receiveIngredients, receiveTaste, receiveOrigin) {}
	void printDetails() {
		cout << "22K-4149 Sunny also likes Leafy Green Juice" << endl;
		vegetableJuice::printDetails();
	}
};
int leafyGreenJuice::leafyCount = 0;

class rootVegetableJuice : public vegetableJuice {
private:
	static int rootCount;
public:
	rootVegetableJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveOrigin)
		: vegetableJuice(receivePrice, receiveIngredients, receiveTaste, receiveOrigin) {}
	void printDetails() {
		cout << "22K-4149 Sunny also likes Root Vegetable Juice" << endl;
		vegetableJuice::printDetails();
	}
};
int rootVegetableJuice::rootCount = 0;

class mixedVegetableJuice : public vegetableJuice {
private:
	static int mixedVegCount;
public:
	mixedVegetableJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveOrigin)
		: vegetableJuice(receivePrice, receiveIngredients, receiveTaste, receiveOrigin) {}
	void printDetails() {
		cout << "22K-4149 Sunny also likes Mixed Vegetable Juice" << endl;
		vegetableJuice::printDetails();
	}
};
int mixedVegetableJuice::mixedVegCount = 0;



class fruitAndVeggieJuice : public mixedJuice {
private:
	static int fruitAndVegCount;
public:
	fruitAndVeggieJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste)
		: mixedJuice(receivePrice, receiveIngredients, receiveTaste) {}
	void printDetails() {
		cout << "22K-4149 Sunny also likes Fruit and Vegetable Juice" << endl;
		mixedJuice::printDetails();
	}
};
int fruitAndVeggieJuice::fruitAndVegCount = 0;

class smoothieJuice : public mixedJuice {
private:
	static int smoothieCount;
public:
	smoothieJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste)
		: mixedJuice(receivePrice, receiveIngredients, receiveTaste) {}
	void printDetails() {
		cout << "22K-4149 Sunny also likes Smoothie Juice" << endl;
		mixedJuice::printDetails();
	}
};
int smoothieJuice::smoothieCount = 0;

class sales {
private:
	int salesId;
	string customerName;
	double totalBill;
	int numberOfFruitJuice;
	int numberOfVegetableJuice;
	int numberOfMixedJuice;
	static int countSales;
public:
	sales(const string& receiveName,const int receiveNumberOfFruitJuice, const int& receiveNumberOfMixedJuice, const int& receiveNumberOfVegetableJuice, const double& receiveBill) {
		salesId = countSales++;
		customerName = receiveName;
		totalBill = receiveBill;
		numberOfFruitJuice = receiveNumberOfFruitJuice;
		numberOfMixedJuice = receiveNumberOfMixedJuice;
		numberOfVegetableJuice = receiveNumberOfVegetableJuice;
	}

	void setCount() {
		numberOfFruitJuice = fruitJuice::getFCount();
		numberOfMixedJuice = mixedJuice::getMCount();
		numberOfVegetableJuice = vegetableJuice::getVCount();
	}

	int getSalesId() const { return salesId; }
	string getCustomerName() const { return customerName; }
	double getTotalBill() const { return totalBill; }
	int getNumberOfFruitJuice() const { return numberOfFruitJuice; }
	int getNumberOfVegetableJuice() const { return numberOfVegetableJuice; }
	int getNumberOfMixedJuice() const { return numberOfMixedJuice; }

	void addToBill(juice * object) {
		totalBill += object->getPrice();
		setCount();
	}

	void checkout() {
		cout << "\n";
		if (totalBill > 0) {
			cout << "__________________________________________________________Bill______________________________________________________\n" << endl;
			cout << "Sales Id: " << salesId << endl;
			cout << "Customer Name: " << customerName << endl;
			if (numberOfFruitJuice > 0) {
				cout << "Fruit Juice Quantity: " << numberOfFruitJuice << endl;
			}
			if (numberOfMixedJuice > 0) {
				cout << "Mixed Juice Quantity: " << numberOfMixedJuice << endl;
			}
			if (numberOfVegetableJuice > 0) {
				cout << "Vegetable Juice Quantity: " << numberOfVegetableJuice << endl;
			}
			cout << "Total Bill (PKR): " << totalBill << endl;
		}
		else {
			cout << "No purchase made" << endl;
			exit(0);
		}
	}

// Operator Overloading
	sales operator+(const sales& object) {
		int totalFruits, totalVeggies, totalMixed;
		double sumBill;
		if (customerName != object.customerName) {
			cout << "Customer names do not match" << endl;
			exit(1);
		}
		sumBill = totalBill + object.totalBill;
		totalFruits = numberOfFruitJuice + object.numberOfFruitJuice;
		totalMixed = numberOfMixedJuice + object.numberOfMixedJuice;
		totalVeggies = numberOfVegetableJuice + object.numberOfVegetableJuice;
		return sales(object.customerName, totalFruits, totalMixed, totalVeggies, sumBill);
	}
};
int sales::countSales = 4149;

int main(void) {
	string tempName;
	cout << "___________________________________________WELCOME TO SUNNY'S JUICE OUTLET_________________________________________\n\nKindly enter your name: ";
	getline(cin, tempName);

	juice* juicePoint;
	sales sOne(tempName, 0, 0, 0, 0.0);

	int menuOption = 0;
	int juiceOption = 0;
	while (1) {
		cout << "\nWhat would you like to have: " << endl << "1) Fruit Juice" << endl << "2) Vegetable Juice" << endl << "3) Mixed Juice" << endl << "4) Checkout" << endl << "Choice: ";
		cin >> menuOption;
		if (menuOption == 1) {
			cout << "\nSelect a fruit juice:" << endl << "1. Citrus Juice" << endl << "2. Berry Juice" << endl << "3. Tropical Juice" << endl << "Choice: ";
			cin >> juiceOption;
			if (juiceOption == 1) {
				juicePoint = new citrusJuice(399, "orange, lemon, grapefruit", "sweet and tangy", "Winter");
				sOne.addToBill(juicePoint);
				cout << "\n22K-4149 Sunny also likes Citrus Juice" << endl;
			}
			else if (juiceOption == 2) {
				juicePoint = new berryJuice(499 ,"strawberry, raspberry, blueberry", "sweet and tart", "Summer");
				sOne.addToBill(juicePoint);
				cout << "\n22K-4149 Sunny also likes Berry Juice" << endl;
			}
			else if (juiceOption == 3) {
				juicePoint = new tropicalJuice(599, "pineapple, mango, papaya", "sweet and tangy", "Summer");
				sOne.addToBill(juicePoint);
				cout << "\n22K-4149 Sunny also likes Tropical Juice" << endl;
			}
			else if (juiceOption == 4) {
				sOne.checkout();
				break;
			}
			else {
				cout << "Invalid Input" << endl;
				exit(1);
			}
		}
		else if (menuOption == 2) {
			cout << "\nSelect a vegetable Juice:" << endl << "1) Leafy Green Juice" << endl << "2) Root Vegetable Juice" << endl << "3) Mixed Vegetable Juice" << endl <<"4) Checkout" << endl << "Choice: ";
			cin >> juiceOption;
			if (juiceOption == 1) {
				juicePoint = new leafyGreenJuice(499, "kale, spinach, celery", "bitter and earthy", "USA");
				sOne.addToBill(juicePoint);
				cout << "\n22K-4149 Sunny also likes Leafy Green Juice" << endl;
			}
			else if (juiceOption == 2) {
				juicePoint = new rootVegetableJuice(599, "carrot, beetroot, ginger", "sweet and spicy", "Canada");
				sOne.addToBill(juicePoint);
				cout << "\n22K-4149 Sunny also likes Root Vegetable Juice" << endl;
			}
			else if (juiceOption == 3) {
				juicePoint = new mixedVegetableJuice(699, "kale, carrot, beetroot, ginger", "earthy and sweet", "UK");
				sOne.addToBill(juicePoint);
				cout << "\n22K-4149 Sunny also likes Mixed Vegetable Juice" << endl;
			}
			else if (juiceOption == 4) {
				sOne.checkout();
				break;
			}
			else {
				cout << "Invalid Input" << endl;
				exit(1);
			}
		}
		else if (menuOption == 3) {

			cout << "\nSelect a mixed juice:" << endl << "1) Fruit and Veggie Juice" << endl << "2) Smoothie Juice" << endl << "3) Checkout" << endl << "Choice: ";
			cin >> juiceOption;
			if (juiceOption == 1) {
				juicePoint = new fruitAndVeggieJuice(499, "Carrots, Apples", "Sweet");
				sOne.addToBill(juicePoint);
				cout << "\n22K-4149 Sunny also likes Fruit And Vegetable Juice" << endl;
			}
			else if (juiceOption == 2) {
				juicePoint = new smoothieJuice(599, "Banana, Strawberries", "Sweet");
				sOne.addToBill(juicePoint);
				cout << "\n22K-4149 Sunny also likes SMoothie Juice" << endl;
			}
			else if (juiceOption == 3) {
				sOne.checkout();
				break;
			}
			else {
				cout << "Invalid Input" << endl;
				exit(1);
			}
		}
		else if (menuOption == 4) {
			sOne.checkout();
			break;
		}
		else {
			cout << "Invalid Input" << endl;
			exit(1);
		}
	}


	// Operator Overloading
	sales sTwo("Sunny", 1, 3, 4, 3000.0);
	sales sThree = sOne + sTwo;
	cout << "\n\n_________________________________________OPERATOR OVERLOADING OPERATION (+) BELOW___________________________________\n" << endl;
	sThree.checkout();

	return 0;
}
