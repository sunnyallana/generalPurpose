#include "labFour-q3-header.h"
int main(void) {
	cout << "\n\n___________________________________INPUT_______________________________\n" << endl;
	string temporaryRequirements, temporaryCode, temporaryDeploy;
	cout << "Enter Requirements: ";
	cin >> temporaryRequirements;
	cout << "Enter Code: ";
	cin >> temporaryCode;
	cout << "Enter Deploy: ";
	cin >> temporaryDeploy;
	_project obj1(temporaryRequirements, temporaryCode, temporaryDeploy);
	_project obj2(obj1);
	cout << "\n\n___________________________DISPLAY OBJECT ONE__________________________\n" << endl;
	obj1.display();
	cout << "\n\n___________________________DISPLAY OBJECT TWO__________________________\n" << endl;
	obj2.display();
}