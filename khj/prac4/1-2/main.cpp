#include<iostream>
#include<string>
using namespace std;

int main() {
	int *p = new int[5];
	
	cout << "점수 5개 입력 >> ";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
	}

	double sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += p[i];
	}

	cout << "평균 " << sum / 5 << endl;

	system("pause");
	return 0;
}