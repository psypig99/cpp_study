#include<iostream>

int main() {
	int sum = 0;
	for (int i = 0; i < 11; i++) {
		sum = sum + i;
	}

	std::cout << "결과는 " << sum << " 입니다." << std::endl;
	system("pause");
	return 0;
}