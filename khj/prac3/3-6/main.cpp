#include<iostream>

using namespace std;

#include "EvenRandom.h"

int main() {
	EvenRandom even;

	cout << "-- 0���� " << RAND_MAX << "������ ���� ¦�� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = even.EvenNext();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2���� " << "10 ������ ���� ¦�� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = even.EvenNextInRange(2,10);
		cout << n << ' ';
	}

	cout << endl;

	system("pause");

	return 0;
}