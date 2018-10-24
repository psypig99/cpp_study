#include<iostream>

using namespace std;

int main() {

	cout << "5 개의 실수를 입력하라 >>";
	double num[5];
	
	cin >> num[0];
	cin >> num[1];
	cin >> num[2];
	cin >> num[3];
	cin >> num[4];
	
	double max=0;

	for (int i = 0; i < 5; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}

	cout << "제일 큰 수" << max <<endl;

	system("pause");
	return 0;
}