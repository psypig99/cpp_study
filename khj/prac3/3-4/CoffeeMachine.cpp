#include<iostream>

using namespace std;

#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine(int a, int b, int c) {
	coffee = a; water = b; sugar = c;
}

void CoffeeMachine::show() {
	cout <<"Ŀ�� �ӽ� ����, Ŀ��:" <<coffee << '\t' <<"��:" << water << '\t' <<"����:"<< sugar << endl;
}

void CoffeeMachine::drinkEspresso() {
	coffee = coffee - 1;
	water = water - 1;
}

void CoffeeMachine::drinkAmericano() {
	coffee = coffee - 1;
	water = water - 2;
}

void CoffeeMachine::drinkSugarCoffee() {
	coffee = coffee - 1;
	water = water - 2;
	sugar = sugar - 1;
}

void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}