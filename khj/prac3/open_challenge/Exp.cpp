#include<iostream>

#include "Exp.h"

using namespace std;

Exp::Exp() {
	base = 1;
	value = 1;
}

Exp::Exp(int a) {
	base = a;
	value = 1;
}

Exp::Exp(int a, int b) {
	base = a;
	value = b;
}

int Exp::getValue() {
	int result = base;
	for (int i = 1; i < value; i++) {
		result *= base;
	}
	return result;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return value;
}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue()) {
		return true;
	}
	else {
		return false;
	}
}