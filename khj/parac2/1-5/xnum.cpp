#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char sentence[100];
	int num=0;

	cout << "���ڵ��� �Է��϶�( 100�� �̸�).";

	cin.getline(sentence, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (sentence[i] == 'x') {
			num++;
		}
	}

	cout << "x�� ������ " << num <<endl;

	system("pause");

	return 0;
}