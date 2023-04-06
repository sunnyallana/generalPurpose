#include <iostream>
#include <string>
using namespace std;


class juice {
private:
	double price;
	string ingredients;
	string taste;
public:
	// Parameterized constructor using initializer list
	juice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste) 
		: price(receivePrice), ingredients(receiveIngredients), taste(receiveTaste) {}
	// Setters/Getters
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
};


class fruitJuice : public juice {
private:
	string season;
public:
	fruitJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveSeason)
		: juice(receivePrice, receiveIngredients, receiveTaste) {
		season = receiveSeason;
	}
	void setSeason(const string& receiveSeason) {
		season = receiveSeason;
	}
	string getSeason() const {
		return season;
	}
};

class vegetableJuice : public juice {
private:
	string origin;
public:
	vegetableJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveOrigin)
		: juice(receivePrice, receiveIngredients, receiveTaste) {
		origin = receiveOrigin;
	}
	void setOrigin(const string& receiveOrigin) {
		origin = receiveOrigin;
	}
	string getOrigin() const {
		return origin;
	}
};

class mixedJuice : public juice {
public:
	mixedJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste)
		: juice(receivePrice, receiveIngredients, receiveTaste) {}
};


class citrusJuice : public fruitJuice {
public:
	citrusJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveSeason)
		: fruitJuice(receivePrice, receiveIngredients, receiveTaste, receiveSeason) {}
};
class berryJuice : public fruitJuice {
public:
	berryJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveSeason)
		: fruitJuice(receivePrice, receiveIngredients, receiveTaste, receiveSeason) {}
};
class tropicalJuice : public fruitJuice {
public:
	tropicalJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveSeason)
		: fruitJuice(receivePrice, receiveIngredients, receiveTaste, receiveSeason) {}
};


class leafyGreenJuice : public vegetableJuice {
public:
	leafyGreenJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveOrigin)
		: vegetableJuice(receivePrice, receiveIngredients, receiveTaste, receiveOrigin) {}
};
class rootVegetableJuice : public vegetableJuice {
public:
	rootVegetableJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveOrigin)
		: vegetableJuice(receivePrice, receiveIngredients, receiveTaste, receiveOrigin) {}
};
class mixedVegetableJuice : public vegetableJuice {
public:
	mixedVegetableJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste, const string& receiveOrigin)
		: vegetableJuice(receivePrice, receiveIngredients, receiveTaste, receiveOrigin) {}
};



class fruitAndVeggieJuice : public mixedJuice {
public:
	fruitAndVeggieJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste)
		: mixedJuice(receivePrice, receiveIngredients, receiveTaste) {}
};
class smoothieJuice : public mixedJuice {
public:
	smoothieJuice(const double& receivePrice, const string& receiveIngredients, const string& receiveTaste)
		: mixedJuice(receivePrice, receiveIngredients, receiveTaste) {}
};

