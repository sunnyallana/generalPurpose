// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Pre-declaration of class room
class room;
// Defining a class named "radiator" and declaring its attributes
class radiator {
	private:
		int radiatorId;
		bool isOn;
		static int incrementId;
	public:
		// Prototyping function that will be defined outside of the class
		static int inputStudentId();
		// Default constructor to assign id to objects and initiate them in an off state
		radiator() {
			radiatorId = incrementId;
			incrementId += 15;
			isOn = false;
		}
		// Getter function for radiatorId
		int getRadiatorId() const {
			return radiatorId;
		}
		// Public method called heats that links room object with radiator object
		void heats(room &roomObject);
};
	
// Initializing static variable "incrementId"
int radiator::incrementId = radiator::inputStudentId();

// A function to take student Id as an input from the user
int radiator::inputStudentId() {
	string studentIdString, numberPortion;
	int studentIdInt;
	cout << "\t\t\t\t\t Name: Sunny Shaban Ali\n \t\t\t\t\t StudentID: 22K-4149\n" << endl;
	cout << "Input your student ID in \"22K-4149\" format: ";
	cin >> studentIdString;
	// Radeeming last four numbers of student ID
	numberPortion = studentIdString.substr(5,4);
	// Converting numbers to int datatype
	studentIdInt = stoi(numberPortion);
	return studentIdInt;
}
// Defining a class named "room" and declaring its attributes
class room {
	private:
		string roomName;
		int seatingCapacity, numRadiators;
		// Array to store radiator ids 
		int radiatorIds[2] = {0};	
	public:
		// A parameterized constructor [Initializer list method] that takes room name, sets seating capacity to 12 if no other input is provided, and initializes numRadiators with 0
		room(string receiveRoomName, int receiveCapacity = 12)
			: roomName(receiveRoomName), seatingCapacity(receiveCapacity), numRadiators(0) {}

		// A function that takes reference of radiator as an argument and checks for certain conditions
		string isHeatedBy(radiator &radiatorObject) {
			for (int i = 0; i < numRadiators; i++) {
				if (radiatorIds[i] == radiatorObject.getRadiatorId()) {
					return " already added to the Room.";
				}
			}
			if (numRadiators >= 2) {
				return " cannot be added. Room has a maximum number of Radiators.";
			}
			else {
				radiatorIds[numRadiators++] = radiatorObject.getRadiatorId();
				return " successfully added to the Room.";
			}
		}
};
// To set the calling radiator object's isOn status to true and pass the object to isHeatedBy
void radiator::heats(room &roomObject) {
	isOn = true;
	cout << "Radiator ["<< radiatorId << "]" << roomObject.isHeatedBy(*this) << endl; 
}
// Defining driver code
int main(void) {
	radiator rd1, rd2;
	radiator rd3;
	room roomOne("Room");
	rd1.heats(roomOne);
	rd2.heats(roomOne);
	rd1.heats(roomOne);
	rd3.heats(roomOne);
	return 0;
}