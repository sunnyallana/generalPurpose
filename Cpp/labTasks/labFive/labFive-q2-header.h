#pragma once
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining a class named "ATM" and declaring its attributes
class ATM {
private:
    string screen;
    string keypad;
    string cashDispenser;
    string cardReader;
public:
    // Parameterized constructor using initializer list method
    ATM(string receiveScreen, string receiveKeypad, string receiveCashDispenser, string receiveCardReader) : screen(receiveScreen), keypad(receiveKeypad), cashDispenser(receiveCashDispenser), cardReader(receiveCardReader) {}
    // Destructor
    ~ATM() {
        cout << "\nInstance of ATM destroyed\n";
    }
    // Display Function
    void display() const {
        cout << "Screen: " << screen << endl;
        cout << "Keypad: " << keypad << endl;
        cout << "Cash Dispenser: " << cashDispenser << endl;
        cout << "Card Reader: " << cardReader << endl;
    }
};
