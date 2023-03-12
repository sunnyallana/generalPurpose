#include <iostream>
#include <string>
using namespace std;

class book {
private:
	string title;
	string author;
	long unsigned int isbnNumber;
	static int countBooks;
public:
	book() {
		title = "";
		author = "";
		isbnNumber = 0;
	}
	book(string title, string author, long unsigned int isbnNumber) {
		this->title = title;
		this->author = author;
		this->isbnNumber = isbnNumber;
		countBooks++;
	}
	void setTitle(const string receiveTitle) {
		title = receiveTitle;
	}
	string getTitle() const {
		return title;
	}
	void setAuthor(const string receiveAuthor) {
		author = receiveAuthor;
	}
	string getAuthor() const {
		return title;
	}
	void setIsbnNumber(const long unsigned int receiveIsbnNumber) {
		isbnNumber = receiveIsbnNumber;
	}

	long unsigned int getIsbnNumber() const {
		return isbnNumber;
	}
	static int getTotalBooksIssued() {
		return countBooks;
	}
};
int book::countBooks = 0;



class student {
private:
	string name;
	int idNumber;
	book Book[2];
	int issuedBook;
	const int numberBooks = 2;

public:
	student(string name, int idNumber) {
		this->name = name;
		this->idNumber = idNumber;
		issuedBook = 0;
	}
	void addBook(string title, string author, long unsigned int isbnNumber) {
		if (numberBooks == issuedBook) {
			cout << "Maximum issue limit reached. Exiting";
			exit(1);
		}
		Book[issuedBook] = book(title, author, isbnNumber);
		issuedBook++;
	}
	void displayBooks() {
		for (int i = 0; i < issuedBook; i++) {
			cout << "Title: " << Book[i].getTitle() << endl;
			cout << "Author: " << Book[i].getAuthor() << endl;
			cout << "ISBN Number: " << Book[i].getIsbnNumber() << endl;
		}
	}
	void getBorrowedCount() {
		cout << name << " has borrowed " << issuedBook << " books" << endl;
	}
};


int main(void) {
	student sOne("Sunny", 4149);
	sOne.addBook("All the bright places", "Jennifer Niven", 1022222); // This would add a book to Sunny's issued list. Books details would be inputted by the user
	sOne.displayBooks();
	sOne.getBorrowedCount();
	cout << "Total Books issued to all students: " << book::getTotalBooksIssued() << endl;
	return 0;
}