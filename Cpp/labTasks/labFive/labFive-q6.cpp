#include "labFive-q6-header.h"
int main(void) {
	event eOne("Event 1", 1, "1-1-2023", "11:00", "Venue 1", "Entertainment");
	eOne.display();
	event eTwo("Event 2", 2, "2-2-2023", "12:00", "Venue 2", "Educational");
	eTwo.display();
	event eThree("Event 3", 3, "3-3-2023", "12:00", "Venue 2", "Educational");
	eThree.display();

}