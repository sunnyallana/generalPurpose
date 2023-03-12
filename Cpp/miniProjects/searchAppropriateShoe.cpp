// Preprocessing Directives
#include <iostream>
#include <string>
using namespace std;
// Defining Class
class user {
private:
	int userId[2];
	string name;
	int age;
	float height;
	string gender;
	float shoeSize;
public:
	// Default Constructor
	user() {
		userId[0] = 22;
		userId[1] = 4149;
		name = "";
		age = 0;
		height = 0;
		gender = "";
		shoeSize = 0;
	}
	// Parameterized Constructor
	user(string receiveName, int receiveAge, float receiveHeight, string receiveGender, int receiveShoeSize):name(receiveName), age(receiveAge), height(receiveHeight), gender(receiveGender), shoeSize(receiveShoeSize)
	{
	userId[0] = 22;
	userId[1] = 4149;
	}
	// Setter functions
	void setName(const string receiveName) { name = receiveName; }
	void setAge(const int receiveAge) { age = receiveAge; }
	void setHeight(const float receiveHeight) { height = receiveHeight; }
	void setGender(const string receiveGender) { gender = receiveGender; }
	void setShoeSize(const float receiveShoeSize) { shoeSize = receiveShoeSize; }
	void setUserId(const int receiveIndexZero, const int receiveIndexOne) { userId[0] = receiveIndexZero; userId[1] = receiveIndexOne; }
	// Getter functions
	string getName(void) const { return name; }
	int getAge(void) const { return age; }
	float getHeight(void) const { return height; }
	string getGender(void) const { return gender; }
	float getShoeSize(void) const { return shoeSize; }
	// Display functions
	void displayUserId(void) const {
		cout << "User ID: " << userId[0] << "K-" << userId[1] << endl;
	}
	// User's demographic
	string getUserDemographic(void) const {
		if (age >= 0 && age <= 2) {
            return "Infant";
        }
        else if (age >= 3 && age <= 5) {
            return "Toddler";
        }
        else if (age >= 6 && age <= 12) {
            return "Child";
        }
        else if (age >= 13 && age <= 19) {
            return "Teenager";
        }
        else {
            return "Adult";
        }
	}
	// Display user demographic
	void displayUserDemographic(void) const {
		cout << "User Demographic: " << getUserDemographic() << endl;
	}
};

class shoe {
private:
	float size;
	float width;
	string style;
	string brand;
	string color;
	string demographic;
	 
public:
	// Default Constructor
	shoe(){
		size = 0.0;
		width = 0.0;
		style = "";
		brand = "";
		color = "";
		demographic = "";
	}
	// Parameterized Constructor
	shoe(float receiveSize, float receiveWidth, string receiveStyle, string receiveBrand, string receiveColor, string receiveDemographic): size(receiveSize), width(receiveWidth), style(receiveStyle), brand(receiveBrand), color(receiveColor){}
	// Setter functions
	void setSize(const float receiveSize) { size = receiveSize; }
	void setWidth(const float receiveWidth) { width = receiveWidth; }
	void setStyle(const string receiveStyle) { style = receiveStyle; }
	void setBrand(const string receiveBrand) { brand = receiveBrand; }
	void setColor(const string receiveColor) { color = receiveColor; }
	void setDemographic(int age) {
            if(age >= 0 && age <= 2) {
                demographic = "infant";
            } else if(age >= 3 && age <= 5) {
                demographic = "toddler";
            } else if(age >= 10 && age <= 12) {
                demographic = "child";
            } else if(age >= 13 && age <= 19) {
                demographic = "teenager";
            } else {
                demographic = "adult";
            }
        }
	// Getter functions
	float getSize(void) const { return size; }
	float getWidth(void) const { return width; }
	string getStyle(void) const { return style; }
	string getBrand(void) const { return brand; }
	string getColor(void) const { return color; }
	string getDemographic(void) const { return demographic;}
};
// Global functions to display values of both user and shoe
void displayInformation(user userObject, shoe shoeObject) {
    cout << "\n_____________________________________User Information__________________________________________\n" << endl;
    userObject.displayUserId();
    cout << "Name: " << userObject.getName() << endl;
    cout << "Age: " << userObject.getAge() << endl;
    cout << "Height: " << userObject.getHeight() << endl;
    cout << "Gender: " << userObject.getGender() << endl;
    cout << "Shoe Size: " << userObject.getShoeSize() << endl;

    cout << "\n_____________________________________Shoe Information__________________________________________\n" << endl;
    cout << "Size: " << shoeObject.getSize() << endl;
    cout << "Width: " << shoeObject.getWidth() << endl;
    cout << "Style: " << shoeObject.getStyle() << endl;
    cout << "Brand: " << shoeObject.getBrand() << endl;
    cout << "Color: " << shoeObject.getColor() << endl;
    cout << "Demographic: " << shoeObject.getDemographic() << endl;
}
// Defining the driver function
int main(void){
// Constructing objects using default constrctor
	user userOne;
	shoe shoeOne;
// Variables declaration
	string receiveName, receiveGender;
	int receiveAge;
	float receiveHeight, receiveShoeSize;
	string receiveStyle, receiveBrand, receiveColor;
	float receiveSize, receiveWidth;
// Switch case to perform relevant operation
	int choice = 0;
	cout << "\n\n____________________________What operation would you like to perform ? ___________________________\n" << endl;
	cout << "1) Add a User\n2) Add a Shoe\n3) Modify User\n4) Modify Shoe\n5) Display User\n6) Display Shoe\n7) Display both\n8) Exit application\n\nEnter Choice: ";
	cin >> choice;
	while(choice != 8){
		if(choice < 1 || choice > 8){
			cout << "Invalid Choice. Exiting......";
			exit(1);
		}
		else if(choice == 1){
			cout << "\n_____________________________________Input User Information__________________________________________\n" << endl;
			cout << "Enter your Name: ";
			cin >> receiveName;
			userOne.setName(receiveName);
			cout << "Enter your Age: ";
			cin >> receiveAge;
			userOne.setAge(receiveAge);
			cout << "Enter your Height: ";
			cin >> receiveHeight;
			userOne.setHeight(receiveHeight);
			cout << "Enter your Gender: ";
			cin >> receiveGender;
			userOne.setGender(receiveGender);
			cout << "Enter your Shoe Size: ";
			cin >> receiveShoeSize;
			userOne.setShoeSize(receiveShoeSize);
			cout << "\n\n____________________________What operation would you like to perform ? ___________________________\n" << endl;
			cout << "1) Add a User\n2) Add a Shoe\n3) Modify User\n4) Modify Shoe\n5) Display User\n6) Display Shoe\n7) Display both\n8) Exit application\n\nEnter Choice: ";
			cin >> choice;
		}
		else if(choice == 2){
			cout << "\n_____________________________________Input Shoe Information__________________________________________\n" << endl;
			cout << "\nEnter Size: ";
			cin >> receiveSize;
			shoeOne.setSize(receiveSize);
			cout << "Enter Width: ";
			cin >> receiveWidth;
			shoeOne.setWidth(receiveWidth);
			cout << "Enter Style: ";
			cin >> receiveStyle;
			shoeOne.setStyle(receiveStyle);
			cout << "Enter Brand: ";
			cin >> receiveBrand;
			shoeOne.setBrand(receiveBrand);
			cout << "Enter Color: ";
			cin >> receiveColor;
			shoeOne.setColor(receiveColor);
			cout << "\n\n____________________________What operation would you like to perform ? ___________________________\n" << endl;
		cout << "1) Add a User\n2) Add a Shoe\n3) Modify User\n4) Modify Shoe\n5) Display User\n6) Display Shoe\n7) Display both\n8) Exit application\n\nEnter Choice: ";
			cin >> choice;
		}
		else if(choice == 3){
			cout << "\n_____________________________________Modify User Information__________________________________________\n" << endl;
			cout << "Enter your Name: ";
			cin >> receiveName;
			userOne.setName(receiveName);
			cout << "Enter your Age: ";
			cin >> receiveAge;
			userOne.setAge(receiveAge);
			cout << "Enter your Height: ";
			cin >> receiveHeight;
			userOne.setHeight(receiveHeight);
			cout << "Enter your Gender: ";
			cin >> receiveGender;
			userOne.setGender(receiveGender);
			cout << "Enter your Shoe Size: ";
			cin >> receiveShoeSize;
			userOne.setShoeSize(receiveShoeSize);
			cout << "\n\n____________________________What operation would you like to perform ? ___________________________\n" << endl;
			cout << "1) Add a User\n2) Add a Shoe\n3) Modify User\n4) Modify Shoe\n5) Display User\n6) Display Shoe\n7) Display both\n8) Exit application\n\nEnter Choice: ";
			cin >> choice;
		}
		else if(choice == 4){
			cout << "\n_____________________________________Modify Shoe Information__________________________________________\n" << endl;
			cout << "\nEnter Size: ";
			cin >> receiveSize;
			shoeOne.setSize(receiveSize);
			cout << "Enter Width: ";
			cin >> receiveWidth;
			shoeOne.setWidth(receiveWidth);
			cout << "Enter Style: ";
			cin >> receiveStyle;
			shoeOne.setStyle(receiveStyle);
			cout << "Enter Brand: ";
			cin >> receiveBrand;
			shoeOne.setBrand(receiveBrand);
			cout << "Enter Color: ";
			cin >> receiveColor;
			shoeOne.setColor(receiveColor);
			cout << "\n\n____________________________What operation would you like to perform ? ___________________________\n" << endl;
		cout << "1) Add a User\n2) Add a Shoe\n3) Modify User\n4) Modify Shoe\n5) Display User\n6) Display Shoe\n7) Display both\n8) Exit application\n\nEnter Choice: ";
			cin >> choice;
		}
		else if(choice == 5){
			cout << "\n_____________________________________User Information__________________________________________\n" << endl;
			userOne.displayUserId();
			cout << "Name: " << userOne.getName() << endl;
			cout << "Age: " << userOne.getAge() << endl;
			cout << "Height: " << userOne.getHeight() << endl;
			cout << "Gender: " << userOne.getGender() << endl;
			cout << "Shoe Size: " << userOne.getShoeSize() << endl;
			userOne.displayUserDemographic();
			cout << "\n\n____________________________What operation would you like to perform ? ___________________________\n" << endl;
		cout << "1) Add a User\n2) Add a Shoe\n3) Modify User\n4) Modify Shoe\n5) Display User\n6) Display Shoe\n7) Display both\n8) Exit application\n\nEnter Choice: ";
			cin >> choice;
		}
		else if(choice == 6){
			shoeOne.setDemographic(userOne.getAge());
			cout << "\n_____________________________________Shoe Information__________________________________________\n" << endl;
			cout << "Size: " << shoeOne.getSize() << endl;
			cout << "Width: " << shoeOne.getWidth() << endl;
			cout << "Style: " << shoeOne.getStyle() << endl;
			cout << "Brand: " << shoeOne.getBrand() << endl;
			cout << "Color: " << shoeOne.getColor() << endl;
			cout << "Demographic: " << shoeOne.getDemographic() << endl;
			cout << "\n\n____________________________What operation would you like to perform ? ___________________________\n" << endl;
		cout << "1) Add a User\n2) Add a Shoe\n3) Modify User\n4) Modify Shoe\n5) Display User\n6) Display Shoe\n7) Display both\n8) Exit application\n\nEnter Choice: ";
			cin >> choice;
		}
		else if(choice == 7){
			displayInformation(userOne, shoeOne);
			cout << "\n\n____________________________What operation would you like to perform ? ___________________________\n" << endl;
		cout << "1) Add a User\n2) Add a Shoe\n3) Modify User\n4) Modify Shoe\n5) Display User\n6) Display Shoe\n7) Display both\n8) Exit application\n\nEnter Choice: ";
			cin >> choice;
		}
		else if(choice == 8){
			cout << "Exiting.....";
			exit(0);
		}
	}
}