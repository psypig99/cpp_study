#include<iostream>

using namespace std;

#include "SelectableRandom.h"

int main() {
	SelectableRandom random;

	cout << "-- 0���� " << RAND_MAX << "������ ���� ¦�� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = random.EvenNext();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = random.OddNextInRange(2,9);
		cout << n << ' ';
	}

	cout << endl;

	system("pause");

	return 0;
}