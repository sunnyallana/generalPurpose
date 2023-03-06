#pragma once
// Preprocessing directives
#include <iostream>
#include <string>
using namespace std;
// Defining a class named rectangle and declaring its attributes
class rectangle {
private:
	float width;
	float height;
public:
// Parameterized constructor to initialize instances with dimensions
	rectangle(float width, float height) {
		this->width = width;
		this->height = height;
	}
// A method to calculate are of instances 
	const float getArea() {
		return width * height;
	}
};