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
	void displayBook() const {
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Price: " << price << endl;
		cout << "Quantity: " << quantity << endl;
	}
};
// Defining a class named purchase and declaring its attributes
class purchase {
private:
	string customerName;
	int orderNumber;
	book* Book;
	int quantityOrdered;
public:
	purchase(string customerName, int orderNumber, book* Book, int quantityOrdered) {
		this->customerName = customerName;
		this->orderNumber = orderNumber;
		this->Book = Book;
		this->quantityOrdered = quantityOrdered;
	}
	void printPurchase() const {
		cout << "Customer Name: " << customerName << endl;
		cout << "Order Number: " << orderNumber << endl;
		Book->displayBook();
	}
};