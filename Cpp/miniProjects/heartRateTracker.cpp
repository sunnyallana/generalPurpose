// Preprocessing Directives
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
// Defining Class
class heartRates {
private:
	int uniqueId;
	string firstName;
	int day;
	int month;
	int yearOfBirth;
	static int increamentId;
public:
	// Static function prototype
	inline static int inputStudentId(void);
	// Parameterized Constructor
	heartRates(string receiveFirstName, int receiveDay, int receiveMonth, int receiveYearOfBirth) : firstName(receiveFirstName), day(receiveDay), month(receiveMonth), yearOfBirth(receiveYearOfBirth)
	{
		uniqueId = increamentId;
		increamentId++;
	}
	// Setter functions
	inline void setFirstName(const string receiveFirstName) { firstName = receiveFirstName; }
	inline void setDay(const int receiveDay) { day = receiveDay; }
	inline void setMonth(const int receiveMonth) { month = receiveMonth; }
	inline void setYearOfBirth(const int receiveYearOfBirth) { yearOfBirth = receiveYearOfBirth; }
	// Getter functions
	inline int getUniqueId(void) const { return uniqueId; }
	inline string getFirstName(void) const { return firstName; }
	inline int getDay(void) const { return day; }
	inline int getMonth(void) const { return month; }
	inline int getYearOfBirth(void) const { return yearOfBirth; }
	// A method to get age
	inline int getAge() const {
		int age;
		// Current time
		time_t now = time(0);
		// Pointer to structure "tm" consisting of date/time related information. Syntax found from C++ documentaion
		tm* ltm = localtime(&now);
		// To find the year of birth that may need revision based on month and day
		age = (1900 + ltm->tm_year) - yearOfBirth;
		// Updating the age if it requires any updation
		if ((month > 1 + ltm->tm_mon) || ((month == 1 + ltm->tm_mon) && (day > ltm->tm_mday))) {
			age--;
		}
		return age;
	}
	// A method to get maximum heart rate
	inline int getMaximumHeartRate() const {
		return 220 - getAge();
	}
	// A method to get target heart rate
	inline void getTargetHeartRate() const{
		double upperBound = getMaximumHeartRate() * 0.85;
		double lowerBound = getMaximumHeartRate() * 0.50;
		cout << "Target Heart Rate is between " << lowerBound << " - " << upperBound << "\n" << endl;
	}
};
// Taking student Id and extracting first and second digit to form the starting value for Id
int heartRates::inputStudentId() {
	string studentIdString;
	int studentIdInt;
	cout << "\t\t\t\t\t Name: Sunny Shaban Ali\n \t\t\t\t\t StudentID: 22K-4149\n" << endl;
	cout << "Input your student ID in \"22K-4149\" format: ";
	cin >> studentIdString;
	studentIdInt = (stoi(studentIdString.substr(6, 1)));
	return studentIdInt;
}
// Initializing static private member 
int heartRates::increamentId = heartRates::inputStudentId();

// Defining main
int main(void) {
	// Creating an instance of hearRates
	heartRates hOne("Sunny", 15, 9, 2003);
	// Using getters to display information
	cout << "\nUnique ID: " << hOne.getUniqueId() << endl;
	cout << "First Name: " << hOne.getFirstName() << endl;
	cout << "Date Of Birth: " << hOne.getDay() << "/" << hOne.getMonth() << "/" << hOne.getYearOfBirth() << endl;
	cout << "Age: " << hOne.getAge() << endl;
	cout << "Maximum Heart Rate: " << hOne.getMaximumHeartRate() << endl;
	hOne.getTargetHeartRate();

	heartRates hTwo("Leanord", 22, 1, 2003);
	cout << "\nUnique ID: " << hTwo.getUniqueId() << endl;
	cout << "First Name: " << hTwo.getFirstName() << endl;
	cout << "Date Of Birth: " << hTwo.getDay() << "/" << hTwo.getMonth() << "/" << hTwo.getYearOfBirth() << endl;
	cout << "Age: " << hTwo.getAge() << endl;
	cout << "Maximum Heart Rate: " << hTwo.getMaximumHeartRate() << endl;
	hTwo.getTargetHeartRate();
}