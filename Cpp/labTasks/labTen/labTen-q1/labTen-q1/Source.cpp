// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Forward declaration
class payroll;
// Class named employee
class employee {
private:
	string name;
	int employeeId;
	double employeeSalary;
public:
	friend payroll;
	friend void printEmployeeSalary(const employee& employeeObject);
	friend istream& operator >> (istream& object, employee& eObject);
	friend ostream& operator << (ostream& object, const employee& eObject);
};
// Overloaded >> operator
istream& operator >> (istream& object, employee& eObject) {
	cout << "Enter Employee Id: ";
	object >> eObject.employeeId;
	cout << "Enter Employee Name: ";
	object >> eObject.name;
	cout << "Enter Employee Salary: ";
	object >> eObject.employeeSalary;
	return object;
}
// Overloaded << operator
ostream& operator << (ostream& object, const employee& eObject) {
	cout << "\n_____________________________DISPLAYING DETAILS__________________________\n\n" << endl;
	object << "Employee Name: " << eObject.name << endl;
	object << "Employee Id: " << eObject.employeeId << endl;
	object << "Employee Salary: " << eObject.employeeSalary << endl;
	return object;
}

void printEmployeeSalary(const employee& employeeObject) {
	cout << "_______________________________DISPLAY_________________________________\n\n" << endl;
	cout << "Employee Name: " << employeeObject.name << endl;
	cout << "Employee Salary: " << employeeObject.employeeSalary << endl;
}

class payroll {
private:
	double taxRate;
	double benefitsCost;
public:
	payroll() {
		taxRate = NULL;
		benefitsCost = NULL;
	}
	payroll(const double taxRate, const double benefitsCost) {
		this->taxRate = taxRate;
		this->benefitsCost = benefitsCost;
	}
	double calculateNetSalary(const employee& employeeObject) {
		double grossSalary = employeeObject.employeeSalary + 1000;
		return grossSalary - (grossSalary * taxRate) / 100 - benefitsCost;
	}
	friend istream& operator >> (istream& object, payroll& pObject);

};
istream& operator >> (istream& object, payroll& pObject) {
	cout << "\n________________________________TAKING INPUT_____________________________\n\n" << endl;
	cout << "Enter Tax Rate: ";
	object >> pObject.taxRate;
	cout << "Enter Benefits Cost: ";
	object >> pObject.benefitsCost;
	return object;
}

int main(void) {
	payroll pOne;
	cin >> pOne;
	employee eOne;
	cin >> eOne;
	cout << eOne;
	cout << "Net Salary: " << pOne.calculateNetSalary(eOne) << endl;
}
