#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class User {
public:
    string name;
    int dayOfBirth;
    int monthOfBirth;
    int yearOfBirth;
    string userId;
    string password;

    // Default constructor
    User() {}

    // Constructor with arguments
    User(string n, int d, int m, int y, string uid, string pwd) {
        name = n;
        dayOfBirth = d;
        monthOfBirth = m;
        yearOfBirth = y;
        userId = uid;
        password = pwd;
    }

    // Function to display user data
    void display() {
        cout << "Name: " << name << endl;
        cout << "Date of birth: " << dayOfBirth << "/" << monthOfBirth << "/" << yearOfBirth << endl;
        cout << "User ID: " << userId << endl;
        cout << "Password: " << password << endl;
    }

    // Function to write user data to a file
    void writeToFile() {
        ofstream outfile;
        outfile.open("user_data.txt", ios::app); // Open file in append mode

        // Write user data to file
        outfile << name << " " << dayOfBirth << " " << monthOfBirth << " " << yearOfBirth << " "
                << userId << " " << password << endl;

        outfile.close(); // Close file
    }

    // Function to read user data from a file
    void readFromFile() {
        ifstream infile;
        infile.open("user_data.txt");

        // Read user data from file
        while (!infile.eof()) {
            infile >> name >> dayOfBirth >> monthOfBirth >> yearOfBirth >> userId >> password;
            display();
        }

        infile.close(); // Close file
    }
};

int main() {
    User u1("John", 1, 1, 1990, "john123", "password");

    // Write user data to file
    u1.writeToFile();

    // Read user data from file
    u1.readFromFile();

    return 0;
}