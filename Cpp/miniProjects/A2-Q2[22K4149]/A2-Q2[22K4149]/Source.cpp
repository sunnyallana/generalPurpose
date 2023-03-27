#include <iostream>
#include <string>
using namespace std;


class courses {
private:
	string courseName;
	string courseCode;
	int creditHours;
public:
	courses() {
		courseName = "";
		courseCode = "";
		creditHours = NULL;
	}
	courses(const string& receiveCourseName, const string& receiveCourseCode, const int& receiveCreditHours) {
		courseName = receiveCourseName;
		courseCode = receiveCourseCode;
		creditHours = receiveCreditHours;
	}
	void displayInformation() const {
		cout << "Course Name: " << courseName << endl;
		cout << "Course Code: " << courseCode << endl;
		cout << "Credit Hours: " << creditHours << endl;
	}
	void setCourseName(const string& receiveCourseName) { courseName = receiveCourseName; }
	void setCourseCode(const string& receiveCourseCode) { courseCode = receiveCourseCode; }
	void setCreditHours(const int& receiveCreditHours) { creditHours = receiveCreditHours; }

	string getCourseName() const { return courseName; }
	string getCourseCode() const { return courseCode; }
	int getCreditHours() const { return creditHours; }
};

class student {
private:
	string studentName;
	int numberCoursesEnrolled;
	courses course[10];
	string grade[10];
	bool feesPaid;
public:
	student(const string& receiveStudentName, const int& receiveNumberCoursesEnrolled, const bool& receiveFeesPaid){
		studentName = receiveStudentName;
		numberCoursesEnrolled = receiveNumberCoursesEnrolled;
		feesPaid = receiveFeesPaid;
	}



};