#include <iostream>
#include <string>
using namespace std;

class book {
private:
	string title;
	string authorName;
public:
	book(string title, string authorName) {
		this->title = title;
		this->authorName = authorName;
	}
	book() {
		title = "";
		authorName = "";
	}
	void setTitle(const string receiveTitle) {
		title = receiveTitle;
	}
	void setAuthorName(const string receiveAuthorName) {
		authorName = receiveAuthorName;
	}
	string getTitle() const {
		return title;
	}
	string getAuthorName() const {
		return authorName;
	}
};

class library {
private:
	static int bookCount;
	const int maxCapacity;
	book** Book;
public:
	library(int receiveMaxCapacity) : maxCapacity(receiveMaxCapacity) {
		Book = new book*[maxCapacity];
	}
	~library() {
		delete[] Book;
	}
	void addBook(const book& instance) {
		if (bookCount == maxCapacity) {
			cout << "Cannot add more books to the library. Exiting......" << endl;
			exit(1);
		}
		Book[bookCount++] = &instance;
		cout << "Book added to the library....." << endl;
	}
	void displayBook() const {
		if (bookCount == 0) {
			cout << "No books in the library.....";
			exit(1);
		}
		for (int i = 0; i < bookCount; i++) {
			cout << "\nTitle: " << Book[i].getTitle() << endl;
			cout << "Author Name: " << Book[i].getAuthorName() << endl;
		}
	}
	void modifyBook() const {
		string tempTitle, tempAuthor;
		string dummyTitle, dummyAuthor;
		cout << "\nEnter Book Title: ";
		cin >> tempTitle;
		cout << "Enter Author: ";
		cin >> tempAuthor;
		for (int i = 0; i < bookCount; i++) {
			if (Book[i].getTitle() == tempTitle && Book[i].getAuthorName() == tempAuthor) {
				cout << "\nEnter new Title: ";
				cin.ignore();
				cin >> ws;
				getline(cin, dummyTitle);
				Book[i].setTitle(dummyTitle);
				cout << "Enter new Author Name: ";
				cin.ignore();
				cin >> ws;
				getline(cin, dummyAuthor);
				Book[i].setAuthorName(dummyAuthor);
				cout << "Successfully modified....." << endl;
				break;
			}
		}

	}
};
int library::bookCount = 0;

int main(void) {
	library sceptre(3);
	book bOne("InheritanceGames", "JenniferLynnBarnes");
	book bTwo("HarryPotter", "J.K.Rowling");
	book bThree("EmotionalIntelligence", "DanielGoleman");
	sceptre.addBook(bOne);
	sceptre.addBook(bTwo);
	sceptre.addBook(bThree);
	sceptre.displayBook();
	sceptre.modifyBook();
	sceptre.displayBook();
}