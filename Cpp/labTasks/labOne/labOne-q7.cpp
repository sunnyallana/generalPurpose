/*
	Author: Sunny Allana 22K-4149
	Purpose: To create a C++ program that finds the length of a string using pointers
*/
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining Main
int main(void){
// Declaring and initializing necessary variables
	char userInput[30];
	int length = 0;
	char *ptr = userInput;
// Takes a string which can contain spaces from user
	cout << "Enter the string: ";
	cin.getline(userInput, sizeof(userInput));
// Computing length of the string
	while((*ptr) != '\0'){
		length++;
		ptr++;
	}
// Displaying length of the string
	cout << "The length of the inputted string is equivalent to: " << length;
// Returning control to OS
return 0;
}