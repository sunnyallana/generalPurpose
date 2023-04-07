#include <iostream>
#include <string>
using namespace std;


class course {
private:
	string courseName;
	string courseCode;
	int creditHours;
public:
	course() {
		courseName = "";
		courseCode = "";
		creditHours = NULL;
	}
	course(const string& receiveCourseName, const string& receiveCourseCode, const int& receiveCreditHours) {
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

	friend istream& operator>>(istream& iStreamObject, course& courseObject);
};
 istream& operator>>(istream& iStreamObject, course& courseObject) {
	 cout << "Enter Course Name: ";
	 iStreamObject >> courseObject.courseName;
	 cout << "Enter Course Code: ";
	 iStreamObject >> courseObject.courseCode;
	 cout << "Enter Course Credit Hours: ";
	 iStreamObject >> courseObject.creditHours;
	 return iStreamObject;
}


class student {
private:
	string studentName;
	string studentId;
	int numberCoursesEnrolled;
	double semesterGpa;
	course *courses;
	string *grade;
	bool feesPaid;
public:
	student(){
		studentName = "";
		studentId = "";
		numberCoursesEnrolled ;
		feesPaid = false;
		semesterGpa = 0.0;
		courses = new course[10];
		grade = new string[10];
	}
	student(const string& receiveStudentName, const string& receiveStudentId, const int& receiveNumberCoursesEnrolled, const bool& receiveFeesPaid){
		studentName = receiveStudentName;
		studentId = receiveStudentId;
		numberCoursesEnrolled = receiveNumberCoursesEnrolled;
		feesPaid = receiveFeesPaid;
		courses = new course[numberCoursesEnrolled];
		grade = new string[numberCoursesEnrolled];
	}
	~student() {
		delete[] courses;
		delete[] grade;
	}
	void setCourses() {
		cout << "\n\n_______________________________________________________Setting Courses__________________________________________________\n" << endl;
		for (int i = 0; i < numberCoursesEnrolled; i++) {
			cin >> courses[i];
			cout << "\n";
		}
	}
	int calculateTotalCreditHours() {
		int tempTotal = 0;
		for (int i = 0; i < numberCoursesEnrolled; i++) {
			tempTotal += courses[i].getCreditHours();
		}
		return tempTotal;
	}
	double calculateGpa() {
		double marks = 0.0, sumMarks = 0.0;
		for (int i = 0; i < numberCoursesEnrolled; i++) {
			cout << "Enter marks in " << courses[i].getCourseName() << ": ";
			cin >> marks;
			marks = (marks / 100) * 4.0;
			sumMarks += marks;
			if (marks == 4.00) {
				grade[i] = "A";
			}
			else if (marks >= 3.67 && marks < 4.00) {
				grade[i] = "A-";
			}
			else if (marks >= 3.33 && marks < 3.67) {
				grade[i] = "B+";
			}
			else if (marks >= 3.00 && marks < 3.33) {
				grade[i] = "B";
			}
			else if (marks >= 2.67 && marks < 3.00) {
				grade[i] = "B-";
			}
			else if (marks >= 2.33 && marks < 2.67) {
				grade[i] = "C+";
			}
			else if (marks >= 2.00 && marks < 2.33) {
				grade[i] = "C";
			}
			else if (marks >= 1.00  && marks < 2.00) {
				grade[i] = "D";
			}
			else if (marks >= 0.00 && marks < 1.00) {
				grade[i] = "F";
			}
		}
		semesterGpa =  sumMarks / numberCoursesEnrolled;
		return semesterGpa;
	}

	double calculateGpaPercentage() {
		return ((semesterGpa / 4.00) * 100);
	}

	double calculateSemesterFee() {
		int halfSecondDigit;
		if (feesPaid == true) {
			halfSecondDigit = stoi(studentId.substr(0, 2))/2;
			return halfSecondDigit * 1000 * calculateTotalCreditHours();
		}
		else if (feesPaid = false) {
			return halfSecondDigit * 1000 * calculateTotalCreditHours() * 1.05;
		}
	}

	void payFees() {
		feesPaid = true;
	}

	bool enrolledInCourse(const string& receiveName) {
		for (int i = 0; i < numberCoursesEnrolled; i++) {
			if (courses[i].getCourseName() == receiveName) {
				return true;
				break;
			}
		}
		return false;
	}
	friend istream& operator>>(istream& iStreamObject, student& studentObject);
	friend ostream& operator<<(ostream& oStreamObject, student& studentObject);
};

istream& operator>>(istream& iStreamObject, student& studentObject) {
	cout << "\n\n__________________________________________________Enter Student Details______________________________________________\n" << endl;
	cout << "Enter Student Name: ";
	iStreamObject >> studentObject.studentName;
	cout << "Enter Student ID: ";
	iStreamObject >> studentObject.studentId;
	cout << "Enter Number Of Courses Enrolled: ";
	iStreamObject >> studentObject.numberCoursesEnrolled;
	return iStreamObject;
}


ostream& operator<<(ostream& oStreamObject, student& studentObject) {
	oStreamObject << "\n\n_______________________________________________________Student Details_________________________________________________\n" << endl;
	oStreamObject << "\nStudent Name: " << studentObject.studentName << endl;
	oStreamObject << "Student Id: " << studentObject.studentId << endl;
	oStreamObject << "Number Of Courses Enrolled: " << studentObject.numberCoursesEnrolled << endl;
	oStreamObject << "Total Credit Hours: " << (studentObject.calculateTotalCreditHours()) << endl;
	oStreamObject << "Semester GPA: " << (studentObject.semesterGpa) << endl;
	oStreamObject << "GPA Percentage: " << (studentObject.calculateGpaPercentage()) << endl;
	oStreamObject << "Semester Fees: " << studentObject.calculateSemesterFee() << endl;
	oStreamObject << "Fees: " << (studentObject.feesPaid ? "Paid" : "Not Paid") << endl;

	oStreamObject << "\n\n***********************************************************  Courses  *************************************************\n" << endl;
	for (int i = 0; i < studentObject.numberCoursesEnrolled; i++) {
		studentObject.courses[i].displayInformation();
		if (studentObject.feesPaid == true) {
			oStreamObject << "Grade: " << studentObject.grade[i] << endl;
		}
		else {
			oStreamObject << "LOCKED GRADES" << endl;
		}
		cout << "\n";
	}
	return oStreamObject;
}


int main() {
	string rollNumber;
	int sizeArray;
	cout << "Enter your Roll Number [22K-4149]: ";
	cin >> rollNumber;

	sizeArray = stoi(rollNumber.substr(5, 1));

	student* studentArray = new student[sizeArray];
	cin >> studentArray[0];
	studentArray[0].setCourses();
	studentArray[0].calculateGpa();
	studentArray[0].payFees();
	cout << studentArray[0];
	
	delete[] studentArray;
	return 0;
}