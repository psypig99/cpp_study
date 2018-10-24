#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char text[10000];
	int end=0;
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개 까지 가능합니다." << endl;
	
	cin.getline(text, 10000, ';');

	for (int i = 0; i < 10000; i++) {
		if (isalpha(text[i]) == 0) {
			end++;
		}
	}

	cout << "총 알파벳 수 " << end;

	system("pause");
	return 0;
}