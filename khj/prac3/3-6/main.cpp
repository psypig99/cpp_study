#include<iostream>

using namespace std;

#include "EvenRandom.h"

int main() {
	EvenRandom even;

	cout << "-- 0¿¡¼­ " << RAND_MAX << "±îÁöÀÇ ·£´ý Â¦¼ö 10°³ --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = even.EvenNext();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2¿¡¼­ " << "10 ±îÁöÀÇ ·£´ý Â¦¼ö 10°³ --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = even.EvenNextInRange(2,10);
		cout << n << ' ';
	}

	cout << endl;

	system("pause");

	return 0;
}