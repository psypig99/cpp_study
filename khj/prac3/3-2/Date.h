#pragma once

#include<string>

class Date {
	int year;
	int month;
	int day;
	string independenceDay;
public:
	Date() {
	}
	Date(int a, int b, int c) { year = a; month = b; day = c; } {
	
	}
	Date(sting d) {
	
	}
	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}

};