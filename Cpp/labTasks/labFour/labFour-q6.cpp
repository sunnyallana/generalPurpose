#include <iostream>
#include <string>
using namespace std;

class triangle{
	private:
		float base;
		float height;
		float area;
	public:
		triangle(float receiveBase, float receiveHeight): base(receiveBase), height(receiveHeight) {
			area = 0.5 * base * height;
		}
		void displayArea() const {
			cout << "Area: " << area << " cms square" << endl;
		}
};
	
int main(void){
	float tempBase, tempHeight;
	cout << "Enter base of the triangle in cms: ";
	cin >> tempBase;
	cout << "Enter height of the triangle in cms: ";
	cin >> tempHeight;
	triangle triangleOne(tempBase, tempHeight);
	triangleOne.displayArea();
}
