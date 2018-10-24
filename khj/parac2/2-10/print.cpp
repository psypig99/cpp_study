#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char word[100];
	int num=0;

	cout << "문자열 입력 >> ";
	cin.getline(word, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (word[i] == NULL) {
			num = i - 1;
		}
	}

	for (int j = 0; j < num + 1; j++) {
		for (int n = 0; n <= j; n++) {
			cout << word[n];
		}
		cout << endl;
	}

	system("pause");
	return 0;
}