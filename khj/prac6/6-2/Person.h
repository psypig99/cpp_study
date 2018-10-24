#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person {
	int id;
	double weight;
	string name;

public:
	Person(int id=1, string name="Grace",double weight=20.5) {
		this->id = id;
		this->weight = weight;
		this->name = name;
	}

	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};
