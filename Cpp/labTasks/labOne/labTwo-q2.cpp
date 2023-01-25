/*
	Author: Sunny Allana 22K-4149
	Purpose: To create a C++ program that swaps two numbers without using a third variable
*/
// Preprocessing Directives
#include <iostream>
using namespace std;
// Defining Main
int main(void){
// Declaring necessary variables
	int numOne, numTwo;
// Taking input from user
	cout << "Enter Number 1: ";
	cin >> numOne;
	cout << "Enter Number 2: ";
	cin >> numTwo;
// Swapping the numbers
	numOne = numOne + numTwo;
	numTwo = numOne - numTwo;
	numOne = numOne - numTwo;
// Displaying the result on the console
	cout << "Number 1 post swapping is equivalent to: " << numOne << endl;
	cout << "Number 2 post swapping is equivalent to: " << numTwo << endl; 
// Returning control to OS
return 0;
}