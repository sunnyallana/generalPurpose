// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Class named employee
class employee {
protected:
	string name;
	string code;
public:
	employee(string name, string code) {
		this->name = name;
		this->code = code;
	}
};

class consultant : virtual public employee {
protected:
	int yearsOfExperiece;
public:
	consultant(string name, string code, int yearsOfExperience)
		: employee(name, code) {
		this->yearsOfExperiece = yearsOfExperience;
	}
};

class manager : virtual public employee {
protected:
	int numOfTeams;
public:
	manager(string name, string code, int numOfTeams)
		: employee(name, code) {
		this->numOfTeams = numOfTeams;
	}
};

class consultantManager : public consultant, public manager {
public:
	consultantManager(string name, string code, int numOfTeams, int yearsOfExperience)
		: employee(name, code), consultant(name, code, yearsOfExperience), manager(name, code, numOfTeams)
	{}
	void display() const {
		cout << "Name: " << name << endl;
		cout << "Code: " << code << endl;
		cout << "Number Of Teams: " << numOfTeams << endl;
		cout << "Years Of Experience: " << yearsOfExperiece << endl;
	}
};

// Driver code
int main(void) {
	consultantManager cmOne("Ali", "S-123", 17, 5);
	cmOne.display();
	return 0;
}