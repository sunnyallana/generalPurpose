// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;

// Defining a class named "dataScientist" and declaring its attributes
class dataScientist {
private:
	int dataScientistId;
	static int increamentId;
	string firstName;
	string lastName;
	int age;
	string highestEducation;
	string country;
	int numberAnswersGiven;
	int numberQuestionsAsked;
public:
	// Prototyping function responsible for assigning Id to dataScientists
	inline static int inputStudentId(void);
	// Parameterized constructor
	dataScientist(string receiveFirstName, string receiveLastName, int receiveAge, string receiveHighestEducation, string receiveCountry) :firstName(receiveFirstName), lastName(receiveLastName), age(receiveAge), highestEducation(receiveHighestEducation), country(receiveCountry)
	{
		numberAnswersGiven = 0;
		numberQuestionsAsked = 0;
		dataScientistId = increamentId;
		increamentId++;
	}
	// Setter functions	
	inline void setFirstName(const string receiveFirstName) { firstName = receiveFirstName; }
	inline void setLastName(const string receiveLastName) { lastName = receiveLastName; }
	inline void setAge(const int receiveAge) { age = receiveAge; }
	inline void setHighestEducation(const string receiveHighestEducation) { highestEducation = receiveHighestEducation; }
	inline void setCountry(const string receiveCountry) { country = receiveCountry; }
	// Getter Functions
	inline int getDataScientistId(void) const { return dataScientistId; }
	inline string getFirstName(void) const { return firstName; }
	inline string getLastName(void) const { return lastName; }
	inline int getAge(void) const { return age; }
	inline string getCountry(void) const { return country; }
	inline int getNumberQuestionsAsked(void) const { return numberQuestionsAsked; }
	inline int getNumberAnswersGiven(void) const { return numberAnswersGiven; }
	// Methods to increase count
	inline void askQuestion(string receiveQuestion = "a question") { cout << endl << firstName << " asked \"" << receiveQuestion << "\"\n"; numberQuestionsAsked++; }
	inline void answerProblem(string receiveAnswer = "a question") { cout << endl << firstName << " answered \"" << receiveAnswer << "\"\n"; numberAnswersGiven++; }
};
// Taking student Id and extracting second and last digit to form the starting value for Id
int dataScientist::inputStudentId(void) {
	string studentIdString;
	int studentIdInt;
	cout << "\t\t\t\t\t Name: Sunny Shaban Ali\n \t\t\t\t\t StudentID: 22K-4149\n" << endl;
	cout << "Input your student ID in \"22K-4149\" format: ";
	cin >> studentIdString;
	cout << "\n";
	studentIdInt = (stoi(studentIdString.substr(5, 1)) * 10) + stoi(studentIdString.substr(7, 1));
	return studentIdInt;
}

// Initializing static variable
int dataScientist::increamentId = dataScientist::inputStudentId();
// Defining a class named "admin" and declaring its attributes
class admin {
private:
	string firstName;
	string lastName;
	int age;
	string country;
	int adminId;
	static int increaseID;
	static int countDataScientists;
public:
	// Parameterized constructor
	admin(string receiveFirstName, string receiveLastName, int receiveAge, string receiveCountry): firstName(receiveFirstName), lastName(receiveLastName), age(receiveAge), country(receiveCountry){
	adminId = increaseID;
	increaseID++;
	}
	// Setter functions
	inline void setFirstName(const string receiveFirstName) { firstName = receiveFirstName; }
	inline void setLastName(const string receiveLastName) { lastName = receiveLastName; }
	inline void setAge(const int receiveAge) { age = receiveAge; }
	inline void setCountry(const string receiveCountry) { country = receiveCountry; }
	// Getter functions
	inline string getFirstName(void) const { return firstName; }
	inline string getlastName(void) const { return lastName; }
	inline int getAge(void) const { return age; }
	inline string getCountry(void) const { return country; }
	inline int getAdminId(void) const {return adminId;}
	// Methods to add user and store count
	static inline void addUser(string userName){
		countDataScientists++;
		cout << "User " << userName << " added to records....." << endl;
	}
	static inline void totalUser(void) {
		cout << "\nTotal count of Data Scientist is: " << countDataScientists << endl;
	}
};
// Initializing static variable
int admin::countDataScientists = 0;
int admin::increaseID = 0;
// Defining Main
int main(void) {
	admin aOne("Sunny", "Allana", 19, "Pakistan");
	dataScientist dOne("Leanord", "Hofstader", 30, "PHD", "US");
	admin::addUser(dOne.getFirstName());
	dataScientist dTwo("Sheldon", "Cooper", 29, "PHD", "US");
	admin::addUser(dTwo.getFirstName());
	dataScientist dThree("Howard", "Wolowitz", 28, "MS", "US");
	admin::addUser(dThree.getFirstName());
	
	aOne.totalUser(); // Total users
	
	dOne.askQuestion("How to work with Excel data using Python?");
	dTwo.answerProblem("There is a library named as Numpy which could help. You might wanna read its documentation.");
	dThree.askQuestion("Anyone who can help me out with some Poisson distribution problems ?");
	dTwo.answerProblem("Sure. I can assist");
	
	// Functionality of questions asked count
	cout << "\nNo of question asked by Leanord: " << dOne.getNumberQuestionsAsked() << endl;
	cout << "No of question asked by Sheldon: " << dTwo.getNumberQuestionsAsked() << endl;
	cout << "No of question asked by Howard: " << dThree.getNumberQuestionsAsked() << endl;
	
	// Functionality of questions answered count
	cout << "\nNo of question answered by Leanord: " << dOne.getNumberAnswersGiven() << endl;
	cout << "No of question answered by Sheldon: " << dTwo.getNumberAnswersGiven() << endl;
	cout << "No of question answered by Howard: " << dThree.getNumberAnswersGiven() << endl;

	// Returning control to OS
	return 0;
}