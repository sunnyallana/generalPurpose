/*
	Author: Sunny Allana 22K-4149
	Purpose: To create a C++ program that takes input from user in a 2D array and display the cube of each row and column in a matrix format
*/
// Preprocessing Directives
#include <iostream>
#include <cmath>
using namespace std;
// Defining Main
int main(void){
// Declaring necessary variables
	int rows, columns;
	int array[10][10];
	int cube[10][10];
// Taking input from the user
	cout << "Enter the dimensions of the 2D Array.....\n";
	cout << "Enter the number of Rows: ";
	cin >> rows;
	cout << "Enter the number of Columns: ";
	cin >> columns;
// Iterating using nested loops to populate the array
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			cout << "Enter the element [" << i << "," << j << "]: ";
			cin >> array[i][j];
		}
	}
// Computing and storing the cube of each element of the previous array in a new array
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			cube[i][j] = pow((array[i][j]), 3);
		}
	}
// Displaying the result in a matrix format
	cout << "The cube of each element in the array in matrix format is.....\n";
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			cout << " " << cube[i][j] << " " ;
		}
		cout << "\n";
	}
// Returning control to OS
return 0;
}