#include <iostream>
#include <string.h>
using namespace std;


class instrument{
public:
	virtual void play() = 0; 
	virtual const char* what() = 0; 
	virtual void adjust() = 0;
};

class wind: public instrument{
public:
	void play() override{
		cout << "Playing Wind instrument" << endl;
	}
	const char* what() override{
		return "Wind";
	}
	void adjust() override{
		cout << "Adjusting Wind instrument" << endl << endl;
	}
};

class percussion : public instrument {
public:
	void play() override {
		cout << "Playing Percussion instrument" << endl;
	}
	const char* what() override {
		return "Percussion";
	}
	void adjust() override {
		cout << "Adjusting Percussion instrument" << endl << endl;
	}
};

class stringed : public instrument {
public:
	void play() override {
		cout << "Playing Stringed instrument" << endl;
	}
	const char* what() override {
		return  "Stringed";
	}
	void adjust() override {
		cout << "Adjusting Stringed instrument" << endl << endl;
	}
};

int main(void) {
	wind wOne;
	percussion pOne;
	stringed sOne;

	wOne.play();
	cout << wOne.what() << endl;
	wOne.adjust();

	pOne.play();
	cout << pOne.what() << endl;
	pOne.adjust();

	sOne.play();
	cout << sOne.what() << endl;
	sOne.adjust();
}