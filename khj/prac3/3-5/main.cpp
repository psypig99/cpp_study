#include<iostream>

using namespace std;

#include "Random.h"

int main() {
	Random r;

	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2,4);
		cout << n << ' ';
	}

	cout << endl;

	system("pause");

	return 0;
}