#include "labThree-q2-class.h"
int main(void){
	employee e1;
	static int choice = 0;
	while( choice != 3){
		cout << "\n\n____________________________________________________DISPLAYING MENU_____________________________________________________\n" << endl <<
		"1) Add Employee\n"
		"2) Modify Employee\n"
		"3) Display Employee\n"
		"4) Exit\n"
		"Enter: ";
		cin >> choice;
		if(choice == 1){
			e1.addEmployee();
		}
		else if(choice == 2){
			e1.modifyEmployee();
		}
		else if(choice == 3){
			e1.displayEmployee();
		}
		else if(choice == 4){
			exit(0);
		}
		else{
			cout << "\nInvalid Value. Exiting.....";
			exit(1);
		}
	}
}