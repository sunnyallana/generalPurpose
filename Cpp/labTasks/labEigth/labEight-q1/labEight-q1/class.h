#pragma once
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Class named book
class book {
private:
	string title;
	string author;
	string publisher;
	static int numBooks;
	const int maxBooks = 1;
public:
	// Parameterized constructor which initializes values and checks if maximum books count has been reached
	book(const string receiveTitle, const string receiveAuthor, const string receivePublisher) {
		if (maxBooks == numBooks) {
			cout << "Cannot add more books. Exiting....." << endl;
			exit(1);
		}
		title = receiveTitle;
		author = receiveAuthor;
		publisher = receivePublisher;
		numBooks++;
	}
	// Method to display books
	void displayBook() const {
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Publisher: " << publisher << endl;
	}
	// Getters
	string getTitle() const {
		return title;
	}
	string getAuthor() const {
		return author;
	}
	string getPublisher() const {
		return publisher;
	}
	static int getNumBooks() {
		return numBooks;
	}
};
int book::numBooks = 0;

// Class that inherits from book
class fictionBook : public book {
private:
	string genre;
	string protagonist;
public:
	// Parameterized constructor
	fictionBook(const string receiveTitle, const string receiveAuthor, const string receivePublisher, const string receiveGenre, const string receiveProtagonist) : book(receiveTitle, receiveAuthor, receivePublisher) {
		genre = receiveAuthor;
		protagonist = receiveProtagonist;
	}
	void display() const {
		cout << "Title: " << getTitle() << endl;
		cout << "Author: " << getAuthor() << endl;
		cout << "Publisher: " << getPublisher() << endl;
		cout << "Genre: " << genre << endl;
		cout << "Protagonist: " << protagonist << endl << endl;
	}
};
