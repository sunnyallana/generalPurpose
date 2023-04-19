// Preprocessing Directives
#pragma once
#include <iostream>
#include <string>
using namespace std;
// A function that takes in day and month in integer and returns the zodiac sign of the concerned user
inline string zodiacSign(int day, int month) {
// Self reminder to make sure that valid day and month reach here. Exception handling required.....
	if ((day >= 20 && month == 1) || (day <= 18 && month == 2))
	{
		return "Aquarius";
	}
	else if ((day >= 19 && month == 2) || (day <= 20 && month == 3))
	{
		return "Pisces";
	}
	else if ((day >= 21 && month == 3) || (day <= 19 && month == 4))
	{
		return "Aries";
	}
	else if ((day >= 20 && month == 4) || (day <= 20 && month == 5))
	{
		return "Taurus";
	}
	else if ((day >= 21 && month == 5) || (day <= 20 && month == 6))
	{
		return "Gemini";
	}
	else if ((day >= 21 && month == 6) || (day <= 22 && month == 7))
	{
		return "Cancer";
	}
	else if ((day >= 23 && month == 7) || (day <= 22 && month == 8))
	{
		return "Leo";
	}
	else if ((day >= 23 && month == 8) || (day <= 22 && month == 9))
	{
		return "Virgo";
	}
	else if ((day >= 23 && month == 9) || (day <= 22 && month == 10))
	{
		return "Libra";
	}
	else if ((day >= 23 && month == 10) || (day <= 21 && month == 11))
	{
		return "Scorpio";
	}
	else if ((day >= 22 && month == 11) || (day <= 21 && month == 12))
	{
		return "Sagittarius";
	}
	else if ((day >= 22 && month == 12) || (day <= 19 && month == 1))
	{
		return "Capricorn";
	}
}