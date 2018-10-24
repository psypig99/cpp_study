#pragma once

class Exp {
private:
	int base;
	int value;
public :
	Exp();
	Exp(int a);
	Exp(int a, int b);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};