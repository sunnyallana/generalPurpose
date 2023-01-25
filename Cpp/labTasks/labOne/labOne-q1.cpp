/*
	Author: Sunny Allana 22K-4149
	Purpose: To create a C++ program that takes current year and year of user's birth as an input and finds age of the user
*/
// Preprocessing Directives
#include <iostream>
using namespace std;
// Defining Main
int main(void){
// Declaring necessary variables
	int currentYear, birthYear;
// Taking input from the user
	cout << "Enter current year: ";
	cin >> currentYear;
	cout << "Enter the year in which you were born: ";
	cin >> birthYear;
// Computing and displaying age on the console
	cout << "You are around " << currentYear - birthYear << " years old." << endl;
// Returning control to OS
return 0;
}