#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char sentence[100];
	int num=0;

	cout << "문자들을 입력하라( 100개 미만).";

	cin.getline(sentence, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (sentence[i] == 'x') {
			num++;
		}
	}

	cout << "x의 개수는 " << num <<endl;

	system("pause");

	return 0;
}