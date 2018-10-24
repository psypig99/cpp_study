#pragma once

#include<string>

class CoffeeMachine
{
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int a, int b, int c);
	void show();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
};
