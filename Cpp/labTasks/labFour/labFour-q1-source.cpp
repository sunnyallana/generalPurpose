// Preprocessing Directives
#include "labFour-q1-header.h"
// Defining main
int main(void) {
	product toothPaste("Toothpaste", 20, "Cosmetic", 110322324422);
	toothPaste.displayProduct();
	category makeup(24, "Cosmetic", 001, "12/Jan/2024");
	makeup.displayCategory();
	accounts transactionOne(4, 12.54, 20000, "12/Jan/2023");
	transactionOne.displayAccounts();
	// Returning control to OS
	return 0;
}