#include<iostream>

using namespace std;

#include "SelectableRandom.h"

int main() {
	SelectableRandom random;

	cout << "-- 0¿¡¼­ " << RAND_MAX << "±îÁöÀÇ ·£´ý Â¦¼ö 10°³ --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = random.EvenNext();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2¿¡¼­ " << "9 ±îÁöÀÇ ·£´ý È¦¼ö 10°³ --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = random.OddNextInRange(2,9);
		cout << n << ' ';
	}

	cout << endl;

	system("pause");

	return 0;
}