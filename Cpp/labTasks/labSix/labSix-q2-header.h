#pragma once
// Preprocessing directives
#include <iostream>
#include <string>
using namespace std;
// Defining a class named book and declaring its attributes
class book {
private:
	string title;
	string author;
	double price;
	int quantity;
public:
	// Parameterized constructor
	book(string title, string author, double price, int quantity) {
		this->title = title;
		this->author = author;
		this->price = price;
		this->quantity = quantity;
	}
	string getTitle() const {
		return title;
	}
	string getAuthor() const {
		return author;
	}
	double getPrice() const {
		return price;
	}
	int getQuantity() const {
		return quantity;
	}
};
// Defining a class named purchase and declaring its attributes
class purchase {
private:
	string customerName;
	int orderNumber;
	book Book;
	int quantityOrdered;
public:
	purchase(string customerName, int orderNumber, int quantityOrdered) : Book("All The Bright Places", "Jennifer Niven", 10.34, 2) {
		this->customerName = customerName;
		this->orderNumber = orderNumber;
		this->quantityOrdered = quantityOrdered;
	}
	void printPurchase() const {
		cout << "Customer Name: " << customerName << endl;
		cout << "Order Number: " << orderNumber << endl;
		cout << "Title: " << Book.getTitle() << endl;
		cout << "Author: " << Book.getAuthor() << endl;
		cout << "Price: " << Book.getPrice() << endl;
		cout << "Quantity: " << Book.getQuantity() << endl;
		cout << "Total Price: " << Book.getQuantity() * Book.getPrice() << endl;
	}
};
