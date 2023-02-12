// Preprocessing Directives
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class product{
	private:
		float cost;
		int stock;
		string status;	
	public:
		string category;
// Setter and Getter Functions
	void setCost(float receiveCost){
		cost = receiveCost;
	}
	float getCost(){
		return cost;
	}
	void setStock(int receiveStock){
		stock = receiveStock;
	}
	int getStock(){
		return stock;
	}
	void setStatus(string receiveStatus){
		status = receiveStatus;
	}
	string getStatus(){
		return status;
	}
// Class associated Fucntions
void Add_product_category(){
	int tempStock;
	float tempCost;
	string tempStatus;
	cout << "_______________________________________________Add Product Category____________________________________________________\n" << endl;
	cout << "Enter Cost: "; cin >> tempCost; setCost(tempCost);
	cout << "Enter Stock: "; cin >> tempStock; setStock(tempStock);
	cout << "Enter Status: "; cin >> tempStatus; setStatus(tempStatus);
}
void Display_product_category(){
	cout << "_______________________________________________Display Product Category________________________________________________\n" << endl;
	cout << "Cost: " << getCost() << endl;
	cout << "Stock: " << getStock() << endl;
	cout << "Status: " << getStatus() << endl;
}
};