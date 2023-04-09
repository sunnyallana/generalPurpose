//Preprocessing directives
#include <iostream>
#include <string>
using namespace std;

// Forward declarations
class customer;
class rental;
// Class named movie
class movie {
private:
	string title;
	string genre;
	string director;
public:
	string getTitle() const { return title; }
	string getGenre() const { return genre; }
	string getDirector() const { return director; }

	void setTitle(const string& receiveTitle) {
		title = receiveTitle;
	}
	void setGenre(const string& receiveGenre) {
		genre = receiveGenre;
	}
	void setDirector(const string& receiveDirector) {
		director = receiveDirector;
	}
	friend class rental;
};

class customer {
private:
	int customerId;
	string customerName;
public:
	int getCustomerId() const { return customerId; }
	string getCustomerName() const { return customerName; }

	void setCustomerId(const int& receiveCustomerId) {
		customerId = receiveCustomerId;
	}
	void setCustomerName(const string& receiveCustomerName) {
		customerName = receiveCustomerName;
	}
	friend class rental;
};

class rental {
private:
	movie Movie;
	customer Customer;
public:
	friend istream& operator >>(istream& object, rental& r);
	friend ostream& operator <<(ostream& object, const rental& r);
};
// Method to take input using >>
istream& operator >>(istream& object, rental& r) {
	string tempString;
	int tempInt;
	cout << "________________________ENTER INFORMATION___________________________\n\n" << endl;
	cout << "Enter Movie Title: ";
	object >> tempString;
	r.Movie.setTitle(tempString);
	cout << "Enter Movie Genre: ";
	object >> tempString;
	r.Movie.setGenre(tempString);
	cout << "Enter Movie Director: ";
	object >> tempString;
	r.Movie.setDirector(tempString);
	cout << "Enter Customer Id: ";
	object >> tempInt;
	r.Customer.setCustomerId(tempInt);
	cout << "Enter Customer Name: ";
	object >> tempString;
	r.Customer.setCustomerName(tempString);
	return object;
}
// Method to display details using <<
ostream& operator <<(ostream& object, const rental& r) {
	cout << "\n\n________________________DISPLAYING INFORMATION___________________________\n\n" << endl;
	object << "Movie Title: " << r.Movie.getTitle() << endl;
	object << "Movie Genre: " << r.Movie.getGenre() << endl;
	object << "Movie Director: " << r.Movie.getDirector() << endl;
	object << "Customer ID: " << r.Customer.getCustomerId() << endl;
	object << "Customer Name: " << r.Customer.getCustomerName() << endl;
	return object;
}

int main() {
	rental rOne;
	cin >> rOne;
	cout << rOne;
	return 0;
}