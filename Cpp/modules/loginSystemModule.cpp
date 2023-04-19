#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isUserRegistered(string username) {
    ifstream fin("users.bin");
    string line;
    while (getline(fin, line)) {
        if (line == username) {
            fin.close();
            return true;
        }
    }

    fin.close();
    return false;
}

bool createUser(string username, string password) {
    ofstream fout("users.bin", ios_base::app);

    if (fout.is_open()) {
        fout << username << endl;
        fout << password << endl;
        fout.close();
        return true;
    }
    return false;
}

bool verifyUser(string username, string password) {
    ifstream fin("users.bin");
    string line;

    while (getline(fin, line)) {
        if (line == username) {
            getline(fin, line);

            if (line == password) {
                fin.close();
                return true;
            }
        }
    }
    fin.close();
    return false;
}

int main() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    if (isUserRegistered(username)) {
        cout << "Enter password: ";
        cin >> password;

        if (verifyUser(username, password)) {
            cout << "Login successful!" << endl;
        } else {
            cout << "Incorrect password!" << endl;
        }
    } else {
        cout << "User not found. Create account? (y/n): ";
        char choice;
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            cout << "Enter password: ";
            cin >> password;

            if (createUser(username, password)) {
                cout << "Account created!" << endl;
            } else {
                cout << "Unable to create account. Please try again later." << endl;
            }
        }
    }

    return 0;
}