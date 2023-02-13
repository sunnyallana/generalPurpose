// Preprocessing Directives
#pragma once
#include <iostream>
#include <string>
using namespace std;
// Defining class named _Projoect
class _project {
private:
	string requirements;
	string code;
	string deploy;
public:
	_project(string tempRequirements, string tempCode, string tempDeploy) : requirements(tempRequirements), code(tempCode), deploy(tempDeploy) {}
	_project(const _project& object) {
		requirements = object.requirements;
		code = object.code;
		deploy = object.deploy;
	}
	void display() {
		cout << "Requirements: " << requirements << endl;
		cout << "Code: " << code << endl;
		cout << "Deploy: " << deploy << endl;
	}
};