// Preprocessing Directives
#pragma once
#include <iostream>
#include <string>
using namespace std;
// Defining Class
class Languages_Classification {
 private:
  string name;
  float share;
  float trend;
 public:
// All setters
  void setName(string tempName) { name = tempName; }
  void setShare(float tempShare) { share = tempShare; }
  void setTrend(float tempTrend) { trend = tempTrend; }
// All getters
  string getName() { return name; }
  float getShare() { return share; }
  float getTrend() { return trend; }
// Default Constructor
	Languages_Classification(){};
// Parameterized Constructor
	Languages_Classification(string tempName, float tempShare, float tempTrend){
	name = tempName;
	share = tempShare;
	trend = tempTrend;
}
};