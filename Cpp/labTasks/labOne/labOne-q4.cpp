/*
	Author: Sunny Allana 22K-4149
	Purpose: To create a C++ program that finds the first repeating element from an inputted integer array
*/
// Preprocessing Directives
#include <iostream>
using namespace std;
// Defining Main
int main(void){
// Declaring necessary variables
	int array[100];
	int size;
	int found = 0;
// Taking input from user
	cout << "Enter the size of integer array: ";
	cin >> size;
	for(int i = 0; i < size; i++){
			cout << "Enter element at index " << i << " : ";
			cin >> array[i];
		}
// Computing and displaying the first repeating element
	for(int i = 0; i < size && found == 0; i++){
		for(int j = i+1; j < size && found == 0; j++){
			if(array[i] == array[j]){
				cout << array[i] << " is the first repeating element at index " << i;
				found = 1;
			}
		}
	}
// To display a message if no repeating elements are found
	if( found == 0){
		cout << "No repeating elements found";
	}
// Returning control to OS
return 0;
}
