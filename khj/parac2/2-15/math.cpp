#include<iostream>
#include<string>
using namespace std;

int main() {

	char num1[100];
	char num2[100];
	string symbol;
	int result=0;

	while (true)
	{
		cout << "?";
		cin >> num1 >> symbol >> num2;
		
		if (symbol == "+") {
			result = atoi(num1) + atoi(num2);
		}
		else if (symbol == "-") {
			result = atoi(num1) - atoi(num2);
		}
		else if (symbol == "*") {
			result = atoi(num1) * atoi(num2);
		}
		else if (symbol == "/") {
			result = atoi(num1) / atoi(num2);
		}
		else if (symbol == "%") {
			result = atoi(num1) % atoi(num2);
		}

		cout << num1 << symbol << num2 << " = " << result <<endl;

	}

	system("pause");

	return 0;
}