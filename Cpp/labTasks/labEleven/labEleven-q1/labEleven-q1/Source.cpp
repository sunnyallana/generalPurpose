// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;

// Class named employee
class employee {
private:
    string name;
    int id;
    double salary;
public:
    employee() {
        name = "";
        id = NULL;
        salary = 0.0;
    }
    employee(const string name, const int id, const double salary) {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }
    virtual void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
    virtual ~employee() {}  // Virtual destructor
};

class engineer : virtual public employee {
protected:
    string speciality;
public:
    engineer() {
        speciality = "";
    }
    engineer(const string name, const int id, const double salary, const string speciality) : employee(name, id, salary) {
        this->speciality = speciality;
    }
    void display() const {
        employee::display();
        cout << "Speciality: " << speciality << endl << endl;
    }
};

class manager : virtual public employee {
protected:
    string department;
public:
    manager() {
        department = "";
    }
    manager(const string name, const int id, const double salary, const string department) : employee(name, id, salary) {
        this->department = department;
    }
    void display() const {
        employee::display();
        cout << "Department: " << department << endl << endl;
    }
};

class stakeholder : public engineer, public manager {
public:
    stakeholder() {}
    stakeholder(const string name, const int id, const double salary, const string speciality, const string department)
        : employee(name, id, salary), engineer(name, id, salary, speciality), manager(name, id, salary, department) {}

    void display() const {
        employee::display();
        cout << "Speciality: " << speciality << endl;
        cout << "Department: " << department << endl << endl;;
    }
};

int main() {
    employee* eArray[3];

    eArray[0] = new stakeholder("Sunny", 4149, 20000, "Developer", "Tech");
    eArray[1] = new manager("Sheldon", 4150, 30000, "Physics");
    eArray[2] = new engineer("Howard", 4151, 25000, "Space Crafts");

    eArray[0]->display();
    eArray[1]->display();
    eArray[2]->display();

    // Delete individual pointers
    delete eArray[0];
    delete eArray[1];
    delete eArray[2];

    return 0;
}