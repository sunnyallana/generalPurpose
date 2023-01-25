/*
	Author: Sunny Allana 22K-4149
	Purpose: To create a C++ program that computes the reverse of a string using pointers
*/
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining Main
int main(void){
// Declaring and initializing necessary variables
	char userInput[30];
	char tempChar;
	int length = 0, loopCounter = 0;
	char *stringPointer = userInput;
// Takes a string which can contain spaces from user
	cout << "Enter the string: ";
	cin.getline(userInput, sizeof(userInput));
// Computing length of the string
	while(userInput[loopCounter] != '\0'){
		length++;
		loopCounter++;
	}
// Computing Reverse of the string
	for(int i = 0; i < length/2; i++){
		tempChar = *(stringPointer+i);
		*(stringPointer+i) = *(stringPointer+length-1-i);
		*(stringPointer+length-1-i) = tempChar;
	}
// Displaying Reverse of the string on the screen
	cout << "The reversed string is: " << userInput << endl;
// Returning control to OS
return 0;
}