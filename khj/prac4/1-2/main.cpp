#include<iostream>
#include<string>
using namespace std;

int main() {
	int *p = new int[5];
	
	cout << "���� 5�� �Է� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
	}

	double sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += p[i];
	}

	cout << "��� " << sum / 5 << endl;

	system("pause");
	return 0;
}