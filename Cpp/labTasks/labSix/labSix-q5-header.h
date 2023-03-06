#pragma once
// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining a class named mathematics with inline methods to calculate and display result
class mathematics {
private:
	float result;
public:
// Inline methods
	inline void calculateResult(float result) {
		result =  ((result * 2) + 10) / 3;
		this->result = result;
	}
	inline float getResult() const {
		return result;
	}
};

