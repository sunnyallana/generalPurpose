// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Class named customer
class customer {
private:
    int customerId;
    string customerName;
public:
    customer() {
        customerId = 0;
        customerName = "";
    }
    friend class account;
    friend class bank;
    friend istream& operator>>(istream& object, customer& c);
};
// Class named account
class account {
private:
    int accountNumber;
    double balance;
    customer owner;
public:
    account() {
        accountNumber = 0;
        balance = 0;
    }
    void deposit(const double receiveDeposit) {
        balance += receiveDeposit;
    }
    void withdraw(const double receiveWithdraw) {
        if (receiveWithdraw > balance) {
            cout << "\nInsufficient Balance. Withdrawal failed." << endl;
            return;
        }
        balance -= receiveWithdraw;
        cout << "\nWithdrawal successful." << endl;
    }
    void checkBalance() const {
        cout << "\nAccount Balance for " << owner.customerName << " is: " << balance << endl;
    }
    friend class bank;
    friend void operator+(account& sendingAccount, account& receivingAccount);
};
// Class named bank
class bank {
private:
    static const int maxAccounts = 100;
    account accounts[maxAccounts];
    static int numAccounts;
public:
// Method that sets an account open
    void openAccount(const customer& object, const double initialAmount) {
        accounts[numAccounts].accountNumber = numAccounts + 1;
        accounts[numAccounts].owner = object;
        accounts[numAccounts].balance = initialAmount;
        numAccounts++;
    }
    account& getAccount(int accountNumber) {
        return this->accounts[accountNumber - 1];
    }

    void displayAccount(const int accountNumber) const {
        const account& acc = accounts[accountNumber - 1];
        cout << "\nAccount Number: " << acc.accountNumber << endl;
        cout << "Account Balance: " << acc.balance << endl;
        cout << "Account Owner: " << acc.owner.customerName << endl;
    }
};
int bank::numAccounts = 0;
// For transfering funds
void operator+(account& sendingAccount, account& receivingAccount) {
    double transferAmount;
    cout << "\nEnter the amount you want to transfer to Account Number: " << receivingAccount.accountNumber << ": " << endl;
    cin >> transferAmount;
    if (transferAmount > sendingAccount.balance) {
        cout << "\nInsufficient Balance. Transfer failed." << endl;
        return;
    }
    sendingAccount.balance -= transferAmount;
    receivingAccount.balance += transferAmount;
}

istream& operator>>(istream& object, customer& c) {
    cout << "\nEnter customer Id: ";
    object >> c.customerId;
    cout << "Enter customer Name: ";
    object >> c.customerName;
    return object;
}

int main() {
    bank bOne;
    customer cOne;
    cin >> cOne;

    // Open account with initial balance of 20000
    bOne.openAccount(cOne, 20000);

    // Display account information
    bOne.displayAccount(1);

    // Withdraw 5000 from the account
    account& acc = bOne.getAccount(1);
    acc.withdraw(5000);
    acc.checkBalance();

    // Open a second account
    customer cTwo;
    cin >> cTwo;
    bOne.openAccount(cTwo, 10000);
    bOne.displayAccount(2);

    // Deposit 1000 into the first account
    acc.deposit(1000);
    acc.checkBalance();

    // Transfer 3000 from the first account to the second account
    account& acc2 = bOne.getAccount(2);
    acc + acc2;
    acc.checkBalance();
    acc2.checkBalance();

    return 0;
}
