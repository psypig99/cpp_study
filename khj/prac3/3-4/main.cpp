#include<iostream>

using namespace std;

#include "CoffeeMachine.h"

int main() {
	CoffeeMachine java(5,10,3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();

	system("pause");
	return 0;
}