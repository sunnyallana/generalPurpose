/*
	Author: Sunny Allana 22K-4149
	Purpose: To create a C++ program that finds the maximum and minimum value of the inputted array
*/
// Preprocessing Directives
#include <iostream>
using namespace std;
// Defining Main
int main(void){
// Declaring necessary variables
	int array[100];
	int size;
// Taking input from user
	cout << "Enter the size of integer array: ";
	cin >> size;
	for(int i = 0; i < size; i++){
			cout << "Enter element: ";
			cin >> array[i];
		}
// Bubble sorting the array
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(array[j+1] > array[j]){
				array[j+1] = array[j+1] + array[j];
				array[j] = array[j+1] - array[j];
				array[j+1] = array[j+1] - array[j];
			}
		}
	}
// Displaying maximum and minimum of array
	cout << "Max Value: " << array[size-1] << endl;
	cout << "Min Value: " << array[0] << endl;
// Returning control to OS
return 0;
}
