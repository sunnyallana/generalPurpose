// Preprocessing Directives
#include <iostream>
using namespace std;
// Defining Main
int main(void){
// Declaring necessary variables
	int currentYear, bornYear;
// Taking input from the user
	cout << "Enter current year: ";
	cin >> currentYear;
	cout << "Enter the year in which you were born: ";
	cin >> bornYear;
// Computing and displaying age on the console
	cout << "You are around " << currentYear - bornYear << " years old." << endl;
// Returning control to OS
return 0;
}