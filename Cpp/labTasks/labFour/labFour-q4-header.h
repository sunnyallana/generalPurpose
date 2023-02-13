#pragma once
#include <iostream>
#include <string>
using namespace std;

class divisible {
private:
	int sum;
public:
	divisible() : sum(0) {}
	void divisibleCheckAndSum() {
		for (int i = 100; i <= 200; i++) {
			if (i % 9 == 0) {
				cout << "Number Divisible by 9: " << i << endl;
				sum += i;
			}
		}
		cout << "Sum of all numbers that are divisible by 9: " << sum << endl;
	}
};

