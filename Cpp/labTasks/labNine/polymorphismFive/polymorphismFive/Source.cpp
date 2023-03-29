#include <iostream>
#include <string>
using namespace std;
// Class named bankAccount
class bankAccount {
private:
	string accountNumber;
	string accountTitle;
	float balance;
public:
	bankAccount(const string& receiveAccountNumber, const string& receiveAccountTitle, const float& receiveBalance) {
		accountNumber = receiveAccountNumber;
		accountTitle = receiveAccountTitle;
		balance = receiveBalance;
	}
// Setter and getter for balance
	void setBalance(const float& receiveBalance) {
		balance = receiveBalance;
	}
	float getBalance() const {
		return balance;
	}
// A function that checks for balance sufficiency and then transfers money if it is adequate
	void transferMoney(bankAccount& otherAccount, float sendMoney) {
		if (getBalance() < sendMoney) {
			cout << "Transfer failed due to insufficient funds" << endl;
		}
		else if (getBalance() >= sendMoney) {
			setBalance(balance - sendMoney);
			otherAccount.setBalance(otherAccount.balance + sendMoney);
			cout << "Transfer Successful" << endl;
		}
	}
// Overloading + sign to make transfer easier
	void operator+(bankAccount& otherAccount) {
		float amount;
		cout << "Enter the amount that you want to send to " << otherAccount.accountTitle << ": ";
		cin >> amount;
		transferMoney(otherAccount, amount);
	}

	void display() const {
		cout << "\nAccount Number: " << accountNumber << endl;
		cout << "Account Title: " << accountTitle << endl;
		cout << "Balance: " << balance << endl;
	}
};

int main() {
	bankAccount bOne("0102221323", "Sunny Shaban", 12000);
	bankAccount bTwo("0103331234", "Leanord Hofstader", 10000);

	bOne + bTwo;

	bOne.display();
	bTwo.display();
}