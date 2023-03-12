#include <iostream>
#include <string>
using namespace std;

class user {
private:
	int birthDay;
	int birthMonth;
	int birthYear;
	string name;
	string email;
	long unsigned int contactNumber;
public:
	// Default constructor
	user() {
		birthDay = NULL;
		birthMonth = NULL;
		birthYear = NULL;
		name = "";
		email = "";
		contactNumber = NULL;
	}
	// Parameterized constructor
	user(int birthDay, int birthMonth, int birthYear, string name, string email) {
		this->birthDay = birthDay;
		this->birthMonth = birthMonth;
		this->birthYear = birthYear;
		this->name = name;
	}
	// Setters and getters
	void setBirthDay(const int receiveBirthDay) {
		birthDay = receiveBirthDay;
	}
	int getBirthDay() const {
		return birthDay;
	}
	void setBirthMonth(const int receiveBirthMonth) {
		birthMonth = receiveBirthMonth;
	}
	int getBirthMonth() const {
		return birthMonth;
	}
	void setBirthYear(const int receiveBirthYear) {
		birthYear = receiveBirthYear;
	}
	int getBirthYear() const {
		return birthYear;
	}
	void setName(const string receiveName) {
		name = receiveName;
	}
	string getName() const {
		return name;
	}
	void setEmail(const string receiveEmail) {
		email = receiveEmail;
	}
	string getEmail() const {
		return email;
	}
	void setContactNumber(const int receiveContactNumber) {
		contactNumber = receiveContactNumber;
	}
	int getContactNumber() const {
		return contactNumber;
	}

};

class application {
private:
	string name;
	const int maxUsers;
	static int currentUsers;
	user users[2];

public:
	application(int receiveMaxUsers): maxUsers(receiveMaxUsers){}
	void addUser() {
		if (currentUsers >= maxUsers) {
			cout << "Maximum users reached. Cannot add more users. Exiting....." << endl;
			exit(1);
		}
		int tempDay, tempMonth, tempYear;
		long unsigned int tempContact;
		string tempName, tempEmail;

		cout << "Enter User's Birth Day: ";
		cin >> tempDay;
		users[currentUsers].setBirthDay(tempDay);
		cout << "Enter User's Birth Month: ";
		cin >> tempMonth;
		users[currentUsers].setBirthMonth(tempMonth);
		cout << "Enter User's Birth Year: ";
		cin >> tempYear;
		users[currentUsers].setBirthYear(tempYear);
		cout << "Enter User's Name: ";
		cin >> tempName;
		users[currentUsers].setName(tempName);
		cout << "Enter User's Email: ";
		cin >> tempEmail;
		users[currentUsers].setEmail(tempEmail);
		cout << "Enter User's Contact Number: ";
		cin >> tempContact;
		users[currentUsers].setContactNumber(tempContact);
			currentUsers++;
	}

	void displayUser() const {
		for (int i = 0; i < currentUsers; i++) {
			cout << "Birth Day: " << users[i].getBirthDay() << endl;
			cout << "Birth Month: " << users[i].getBirthMonth() << endl;
			cout << "Birth Year: " << users[i].getBirthYear() << endl;
			cout << "Name: " << users[i].getName() << endl;
			cout << "Email: " << users[i].getEmail() << endl;
			cout << "Contact Number: " << users[i].getContactNumber() << endl;
		}

	}

	void deleteUser(int indexNumber) {
		for (int i = indexNumber; i < currentUsers; i++) {
			users[i].setBirthDay(users[i + 1].getBirthDay());
			users[i].setBirthMonth(users[i + 1].getBirthMonth());
			users[i].setBirthYear(users[i + 1].getBirthYear());
			users[i].setName(users[i + 1].getName());
			users[i].setEmail(users[i + 1].getEmail());
			users[i].setContactNumber(users[i + 1].getContactNumber());
			currentUsers--;
		}
	}
};
int application::currentUsers = 0;

int main(void) {
	application aOne(2);
	aOne.addUser();
	aOne.addUser();
	aOne.addUser();
	aOne.deleteUser(0);
	aOne.displayUser();
}
