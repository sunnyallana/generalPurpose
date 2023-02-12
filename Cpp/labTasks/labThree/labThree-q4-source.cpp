#include "labThree-q4-class.h"
// Defining Main
int main(void){
// Creating objects and setting Values
  Languages_Classification python("Python     ", 28.34, -1.0);
  Languages_Classification java("Java         ", 16.93, -0.8);
  Languages_Classification javaScript("JavaScript     ", 9.28, 0.3);
  Languages_Classification cSharp("C#        ", 6.89, -0.3);
  Languages_Classification cCpp("C/C++        ", 6.64, -0.3);
  Languages_Classification php("PHP          ", 5.19, -1.0);
// Creating an array of objects to radeem attributes of multiple objects easily through a loop
	Languages_Classification allLanguages [] = {python, java, javaScript, cSharp, cCpp, php};
// Looping to display the table in the manner described in the question
	cout << "Rank\tLanguage\tShare\tTrend\n";
	cout << "----\t--------\t-----\t-----\n";
	for(int i = 0; i < 5; i++){
		cout << i+1 << "\t" << allLanguages[i].getName() << "\t" << allLanguages[i].getShare() << "\t" << allLanguages[i].getTrend() << endl;
	}
}