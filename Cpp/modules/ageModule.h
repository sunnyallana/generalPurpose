// Preprocessing Directives
#pragma once
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
// A function to calculate age of the concerned user
inline int calculateAge(int dayOfBirth, int monthOfBirth, int yearOfBirth) {
    int age;
    // Current time
    time_t now = time(0);
    // Pointer to structure "tm" consisting of date/time related information. Syntax found from C++ documentaion
    tm ltm;
    localtime_s(&ltm, &now);
    // To find the year of birth that may need revision based on month and day
    age = (1900 + ltm.tm_year) - yearOfBirth;
    // Updating the age if it requires any updation
    if ((monthOfBirth > 1 + ltm.tm_mon) || ((monthOfBirth == 1 + ltm.tm_mon) && (dayOfBirth > ltm.tm_mday))) {
        age--;
    }
    return age;
}