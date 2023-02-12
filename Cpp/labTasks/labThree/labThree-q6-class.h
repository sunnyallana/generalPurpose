#pragma once
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining Class
class exam{
	private:
	float Marks;
	float Assignment_Quizzes;
	float Tasks;
	public:
	void setMarks(float);
	float getMarks();
	void setAssignment_Quizzes(float);
	float getAssignment_Quizzes();
	void setTasks(float);
	float getTasks();
	
	void addMarks();
	void addAssignment_Quizzes();
	void addTasks();
	void displayAll();
};
// Setter and Getter Functions
void exam::setMarks(float receiveMarks){Marks = receiveMarks;}
float exam::getMarks(){return Marks;}
void exam::setAssignment_Quizzes(float receiveAssignment_Quizzes){Assignment_Quizzes = receiveAssignment_Quizzes;}
float exam::getAssignment_Quizzes(){return Assignment_Quizzes;}
void exam::setTasks(float receiveTasks){Tasks = receiveTasks;}
float exam::getTasks(){return Tasks;}
// Class associated functions
void exam::addMarks(){
	cout << "\n_________________________________________________ADD MARKS____________________________________________________________\n" << endl;
	float tempMarks = 0.0;
	do{
	cout << "Enter Exam marks between [0-50]: ";
	cin >> tempMarks;
	if(tempMarks < 0 || tempMarks > 50){
		cout << "Invalid Marks. Enter again.....\n";
	}
	}while(tempMarks < 0 || tempMarks > 50);
	setMarks(tempMarks);
}

void exam::addAssignment_Quizzes(){
	float tempAssignment_Quizzes = 0.0;
	do{
	cout << "Enter Assignment and Quizes marks between [0-30]: ";
	cin >> tempAssignment_Quizzes;
	if(tempAssignment_Quizzes < 0 || tempAssignment_Quizzes > 30){
		cout << "Invalid Marks. Enter again.....\n";
	}
	}while(tempAssignment_Quizzes < 0 || tempAssignment_Quizzes > 30);
	setAssignment_Quizzes(tempAssignment_Quizzes);
}

void exam::addTasks(){
	float tempTasks = 0.0;
	do{
	cout << "Enter marks scored in tasks between [0-20]: ";
	cin >> tempTasks;
	if(tempTasks < 0 || tempTasks > 20){
		cout << "Invalid Marks. Enter again.....\n";
	}
	}while(tempTasks < 0 || tempTasks > 20);
	setTasks(tempTasks);
}

void exam::displayAll(){
	cout << "\n\n_______________________________________________MARKS DETAILS__________________________________________________________\n" << endl;
	cout << "Marks: " << getMarks() << endl;
	cout << "Assignment And Quizzes: " << getAssignment_Quizzes() << endl;
	cout << "Tasks: " << getTasks() << endl;
}