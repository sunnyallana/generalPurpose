#include "labSeven-q1-header.h"
// Defining main and declaring necessary variables
int main(void) {
// Making instances of both objects and composing them together
	teacher tOne("Sheldon", "sheldon_cooper@gmail.com", "22 Baker Street");
	student sOne("Sunny", 4149, 20, &tOne);
	sOne.displayStudentTeacherDetails();

	teacher tTwo("Leanord", "leanord_hofstader@gmail.com", "Pacadena");
	student sTwo("Penny", 3120, 19, &tTwo);
	sTwo.displayStudentTeacherDetails();
// Returning control to OS
	return 0;
}