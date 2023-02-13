#pragma once
#include <iostream>
#include <string>
using namespace std;
// Defining  a class named product
class product {
private:
	string productName;
	float cost;
public:
	string description;
	unsigned long int barCodeValue;

	product(string tempProductName, float tempCost, string tempDescription, unsigned long int tempBarCodeValue) : productName(tempProductName), cost(tempCost), description(tempDescription), barCodeValue(tempBarCodeValue) {}
	// Method to display product
	void displayProduct() {
		cout << "\n_________________________________PRODUCT___________________________________________\n" << endl;
		cout << "Product Name: " << productName << endl;
		cout << "Cost: " << cost << endl;
		cout << "Description: " << description << endl;
		cout << "Bar Code Value: " << barCodeValue << endl;
	}
};
// Defining  a class named category
class category {
private:
	int stock;
public:
	string categoryType;
	int productID;
	string expiryDate;
	category(int tempStock, string tempCategoryType, int tempProductID, string tempExpiryDate) : stock(tempStock), categoryType(tempCategoryType), productID(tempProductID), expiryDate(tempExpiryDate) {}
	// Method to display category
	void displayCategory() {
		cout << "\n_________________________________CATEGORY___________________________________________\n" << endl;
		cout << "Stock: " << stock << endl;
		cout << "Category Type: " << categoryType << endl;
		cout << "Product ID: " << productID << endl;
		cout << "Expiry Date: " << expiryDate << endl;
	}
};
// Defining  a class named accounts
class accounts {
private:
	int noOfTransactions;
public:
	float amount;
	float range;
	string date;
	accounts(int tempNoOFTransactions, float tempAmount, float tempRange, string tempDate) : noOfTransactions(tempNoOFTransactions), amount(tempAmount), range(tempRange), date(tempDate) {}
	// Method to display accounts
	void displayAccounts() {
		cout << "\n_________________________________ACCOUNTS___________________________________________\n" << endl;
		cout << "No Of Transactions: " << noOfTransactions << endl;
		cout << "Amount: " << amount << endl;
		cout << "Range: " << range << endl;
		cout << "Date: " << date << endl;
	}
};
