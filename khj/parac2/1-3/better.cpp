#include<iostream>
#include<string>

using namespace std;

int main() {
	cout << "두 수를 입력하라";
	int num1;
	int num2;
	cin >> num1;
	cin >> num2;

	if (num1 < num2) {
		cout << "큰 수 = " << num2;
	}
	else if(num1 = num2){
		cout << "둘이 똑같은 값";
	}
	else {
		cout << "큰 수 = " << num1;
	}

	system("pause");

	return 0;
}
