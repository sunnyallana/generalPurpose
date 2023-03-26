#include <iostream>
#include <string>
using namespace std;

// Class named book
class book {
private:
	string title;
	string author;
	int publicationYear;
public:
// Parameterized constructor
	book(const string receiveTitle, const string receiveAuthor, const int receivePublicationYear){
		title = receiveTitle;
		author = receiveAuthor;
		publicationYear = receivePublicationYear;
	}
// Display function
	 virtual void display() const {
		cout << "Book Title: " << title << endl;
		cout << "Book Author: " << author << endl;
		cout << "Publication Year: " << publicationYear << endl;
	}
};
// Class named reference book
class referenceBook : public book {
private:
	string additionalInformation;
public:
// Parameterized constructor
	referenceBook(const string receiveAdditionalInformation, const string receiveTitle, const string receiveAuthor, const int receivePublicationYear) : book(receiveTitle, receiveAuthor, receivePublicationYear)  {
		additionalInformation = receiveAdditionalInformation;
	}
// Display function
	void display() const {
		book::display();
		cout << "Additional Information: " << additionalInformation << endl;
	}
};

int main(void) {
// Late binding
	book* bOne;
	referenceBook rOne("Violet learns to live from Finch", "All The Bright Places", "Jennifer Niven", 2012);
	bOne = &rOne;
	bOne->display();
}