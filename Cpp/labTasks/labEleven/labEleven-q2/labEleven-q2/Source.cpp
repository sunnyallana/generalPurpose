// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Class named control
class control {
private:
	int id;
	double width;
	double height;
public:
	control(int id, double width, double height) {
		this->id = id;
		this->width = width;
		this->height = height;
	}
	virtual void draw() const {
		cout << "Drawing Control" << endl;
	}
	void resize() {
		cout << "Resizing Control" << endl;
	}
};
// Class named image that inherits from control
class image : virtual public control {
private:
	string sketchStyle;
	string sketchDirection;
public:
	image(int id, double width, double height, string sketchStyle, string sketchDirection)
		: control(id, width, height) {
		this->sketchStyle = sketchStyle;
		this->sketchDirection = sketchDirection;
	}
	void draw() const {
		cout << "Drawing image" << endl;
	}

};
// Class named button that inherits from control
class button : virtual public control {
private:
	string textAlignment;
public:
	button(int id, double width, double height, string textAlignment) : control(id, width, height) {
		this->textAlignment = textAlignment;
	}
	void draw() const {
		cout << "Drawing button" << endl;
	}
};

class imageButton : public image, public button {
private:
	string contentAlignment;
public:
	imageButton(int id, double width, double height, string sketchStyle, string sketchDirection, string textAlignment)
		: control(id, width, height), button(id, width, height, textAlignment), image(id, width, height, sketchStyle, sketchDirection) {}

	void draw() const {
		cout << "Drawing Image Button" << endl;
	}
};

int main(void) {
	imageButton ibOne(4149, 12, 11, "Minimal", "Right", "Center");
	ibOne.draw();
}
