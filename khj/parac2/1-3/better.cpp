#include<iostream>
#include<string>

using namespace std;

int main() {
	cout << "�� ���� �Է��϶�";
	int num1;
	int num2;
	cin >> num1;
	cin >> num2;

	if (num1 < num2) {
		cout << "ū �� = " << num2;
	}
	else if(num1 = num2){
		cout << "���� �Ȱ��� ��";
	}
	else {
		cout << "ū �� = " << num1;
	}

	system("pause");

	return 0;
}
