/*Author: Sunny Shaban 22K-4149
  Purpose: A program to keep track of tickets sold for the movies that are screened at cinema halls
  Variable Naming Tactic: Camel case has been used throughout the program*/
  
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining a class named "movie" and declaring its attributes
class movie {
private:
	string movieName;
	string showTime;
// Default constructor
	movie(){}
public:
// A parameterized constructor to initialize instance of movies
	movie(string receiveMovieName, string receiveShowTime): movieName(receiveMovieName), showTime(receiveShowTime){}
// To display all details pertaining to a movie
	inline void movieDetails(void) const {
		cout << "\n______________________________________________MOVIE DETAILS_____________________________________________\n" << endl;
		cout << "Movie Name: " << movieName << endl;
		cout << "Show Time: " << showTime << endl;
	}
};
// Defining a class named "ticket" and declaring its attributes
class ticket {
private:
	int rowNumber;
	int seatNumber;
	int ticketId;
	static int increamentId;
	bool status;
	ticket() {}
public:
// Prototyping a static function responsible to send extracted Id to "increamentId"
	inline static int inputStudentId(void);
// A parameterized constructor that assigns Id to a ticket on its creation and sets default status to false
	ticket(int receiveRowNumber, int receiveSeatNumber, bool receiveStatus = false) : rowNumber(receiveRowNumber), seatNumber(receiveSeatNumber), status(receiveStatus){
		ticketId = increamentId;
		increamentId++;
	}
// Ticket Status modifier. True means tickets are sold. Whereas, false means the opposite
	inline void setStatusToTrue(void) {status = true;}
// Ticket Status getter
	inline bool getStatusBool(void) const { return status; }
	inline string getStatusString(void) const {if(status == true) return "Sold"; else return "Available";}
	inline void ticketDetails(void) const {
		cout << "\n_____________________________________________TICKET DETAILS_____________________________________________\n" << endl;
		cout << "Row Number: " << rowNumber << endl;
		cout << "Seat Number: " << seatNumber << endl;
		cout << "Ticket Id: " << ticketId << endl;
		cout << "Status: " << getStatusString()  << endl;
	}
};
// Taking student Id and extracting first and second digit to form the starting value for Id
int ticket::inputStudentId(void) {
	string studentIdString;
	int studentIdInt;
	cout << "\t\t\t\t\t Name: Sunny Shaban Ali\n \t\t\t\t\t StudentID: 22K-4149\n" << endl;
	cout << "Input your student ID in \"22K-4149\" format: ";
	cin >> studentIdString;
	studentIdInt = (stoi(studentIdString.substr(4, 1)) * 10) + stoi(studentIdString.substr(5, 1));
	return studentIdInt;
}
// Initializing static private member 
int ticket::increamentId = ticket::inputStudentId();

// Defining main
int main(void) {
// Creating an instance of movie
	movie movieOne("All The Bright Places", "7:00 P.M.");
// Displaying movie details
	movieOne.movieDetails();
// Creating instances of ticket
	ticket ticketOne(1, 1);
	ticket ticketTwo(1, 2);
	ticket ticketThree(1, 3);
// Modifying tickets' status
	ticketOne.setStatusToTrue();
	ticketTwo.setStatusToTrue();
// Displaying tickets' details
	ticketOne.ticketDetails();
	ticketTwo.ticketDetails();
	ticketThree.ticketDetails();
// Returning control to OS
	return 0;
}