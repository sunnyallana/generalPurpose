#include "class.h"
int main(void) {
	wizard wOne(10, 1000, 123, 12, "Heal");
// This function would call itself recursively until the condition in displayWizard() is false
	wOne.displayWizard();
}


