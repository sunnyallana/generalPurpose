// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Class named product
class product {
public:
	product(){}
	virtual float getPrice() const {
		return 1;
	}
};
// Class named tv that inherits from product
class tv : public product {
private:
	double screenSize;
	int resolution;

public:
	tv(const double receiveScreenSize, const int receiveResolution){
		screenSize = receiveScreenSize;
		resolution = receiveResolution;
	}
	float getPrice() const {
		return (screenSize+resolution) * 0.5;
	}
};
// Class named laptop that inherits from product
class laptop : public product {
private:
	double processingPower;
	int memory;
public:
	laptop(const double receiveProcessingPower, const int receiveMemory){
		processingPower = receiveProcessingPower;
		memory = receiveMemory;
	}
	float getPrice() const {
		return (processingPower+memory) * 0.10;
	}
};
// Class named smartPhones that inherits from product
class smartPhones : public product {
private:
	double screenSize;
	int cameraResolution;
public:
	smartPhones(const double receiveScreenSize, const int receiveCameraResolution){
		screenSize = receiveScreenSize;
		cameraResolution = receiveCameraResolution;
	}
	float getPrice() const {
		return (screenSize + cameraResolution) * 0.05;
	}
};


int main(void) {
	product* pOne[3] = {NULL, NULL, NULL};
	tv tOne(7.36, 1280);
	laptop lOne(12.34, 2);
	smartPhones sOne(9.233, 3);
	pOne[0] = &tOne;
	pOne[1] = &lOne;
	pOne[2] = &sOne;
	cout << "Televsion's Price: " << pOne[0]->getPrice() << endl;
	cout << "Laptop's Price: " << pOne[1]->getPrice() << endl;
	cout << "SmartPhone's Price: " << pOne[2]->getPrice() << endl;
	return 0;
}