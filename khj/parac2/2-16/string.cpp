#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char text[10000];
	int end=0;
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000�� ���� �����մϴ�." << endl;
	
	cin.getline(text, 10000, ';');

	for (int i = 0; i < 10000; i++) {
		if (isalpha(text[i]) == 0) {
			end++;
		}
	}

	cout << "�� ���ĺ� �� " << end;

	system("pause");
	return 0;
}