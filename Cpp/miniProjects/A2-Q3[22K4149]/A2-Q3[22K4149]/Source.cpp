#include <iostream>
#include <string>
using namespace std;


class product {
protected:
	string name;
	float price;
public:
	product(const string& receiveName, const float& receivePrice): name(receiveName), price(receivePrice) {}
	virtual float getDiscountedPrice() const { return price; }
	virtual void printDetails() const {
		cout << "Name: " << name << endl;
		cout << "Price (PKR): " << price << endl;
		cout << "Discounted Price for ordinary customers (PKR): " << getDiscountedPrice() << endl;
	}
// PART B: OPERATOR OVERLOADING
	product operator&(const product& otherProduct) {
		float averagePrice = (this->getDiscountedPrice() + otherProduct.getDiscountedPrice()) / 2.0;
		string revisedName = this->name + " & " + otherProduct.name;
		return product(revisedName, averagePrice);
	}
};

class customers {
protected:
	string name;
	float balance;
public:
	customers(const string& receiveName, const float& receiveBalance) : name(receiveName), balance(receiveBalance) {}
	//float getBalance() const { return balance; }
	virtual void buyProduct(product* productObject) {
		float discountedPrice = productObject->getDiscountedPrice();
		if (balance >= discountedPrice) {
			balance -= discountedPrice;
			cout << "Product bought successfully" << endl;
		}
		else {
			cout << "Insufficient Balance to buy the product" << endl;
		}
	}
};

class book : public product {
private:
	string author;
public:
	book(const string& receiveName, const float& receivePrice, const string& receiveAuthor) : product(receiveName, receivePrice), author(receiveAuthor) {}
	void printDetails() const {
		product::printDetails();
		// Extension case
		cout << "Author: " << author << endl << endl;
	}
	float getDiscountedPrice() const { return price * 0.95; }
};

class electronic : public product {
private:
	string brand;
public:
	electronic(const string& receiveName, const float& receivePrice, const string& receiveBrand) : product(receiveName, receivePrice), brand(receiveBrand) {}
	void printDetails() const {
		product::printDetails();
		//Extension case
		cout << "Brand: " << brand << endl << endl;
	}
};

class clothing : public product {
private:
	string size;
public:
	clothing(const string& receiveName, const float& receivePrice, const string& receiveSize) : product(receiveName, receivePrice), size(receiveSize) {}
	void printDetails() const {
		product::printDetails();
		//Extension case
		cout << "Size: " << size << endl << endl;
	}
	float getDiscountedPrice() const { return price * 0.9; }
};

class vipCustomer: public customers {
public:
	vipCustomer(const string& receiveName, const float& receiveBalance) : customers(receiveName, receiveBalance) {}
	void buyProduct(product* productObject) {
// VIP get further 10% discount on the already discounted price
			float discountedPrice = (productObject->getDiscountedPrice() * 0.9);
			if (balance >= discountedPrice) {
				balance -= discountedPrice;
				cout << endl << "Product bought successfully by VIP" << endl;
				//cout << "New Balance: " << getBalance() << endl << endl;
			}
			else {
				cout << endl << "VIP has insufficient Balance to buy the product" << endl << endl;
			}
	}
};

int main(void) {
	// PART A: INHERITANCE AND POLYMORPHISM: OVER-RIDING
	book* bOne;
	bOne = new book("All The Bright Places", 900, "Jennifer Niven");
	electronic* eOne; 
	eOne= new electronic("Smartphone", 60000, "Tecno");
	clothing* cOne;
	cOne = new clothing("Hoodie", 1200, "XL");

	vipCustomer vOne("22K-4149", 30000);

	bOne->printDetails();
	eOne->printDetails();
	cOne->printDetails();

	vOne.buyProduct(bOne);
	vOne.buyProduct(cOne);
	vOne.buyProduct(eOne);

	delete bOne;
	delete eOne;
	delete cOne;

	// PART B: OPERATOR OVERLOADING
	product pOne("Mouse", 10);
	product pTwo("Keyboard", 2);
	product pThree = pOne & pTwo;

	pThree.printDetails();

	return 0;
}