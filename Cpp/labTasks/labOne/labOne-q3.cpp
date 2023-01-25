/*
	Author: Sunny Allana 22K-4149
	Purpose: To create a C++ program that takes a number as an input and print it in words
*/
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining Main
int main(void){
// Declaring and initializing necessary variables
	string num;
	int length = 0, i = 0;
// Taking input from user
	cout << "Enter a number: ";
	cin >> num;
// Computing length of the string
	while(num[i] != '\0'){
		length ++;
		i++;	
	}
// Checking for the set forth conditions and printing the output inside the loop
	for( i = 0; i < length; i++){
		switch(num[i]){
			case '0':
				cout << "Zero ";
				break;
			case '1':
				cout << "One ";
				break;
			case '2':
				cout << "Two ";
				break;
			case '3':
				cout << "Three ";
				break;
			case '4':
				cout << "Four ";
				break;
			case '5':
				cout << "Five ";
				break;
			case '6':
				cout << "Six ";
				break;
			case '7':
				cout << "Seven ";
				break;
			case '8':
				cout << "Eight ";
				break;
			case '9':
				cout << "Nine ";
				break;
			case '.':
				cout << "(Point) ";
				break;	
		}
		
			}
// Returning control to OS
return 0;
}
