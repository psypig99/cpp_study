#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char name[100];


	int num = 0;
	

	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���." << endl;

	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
	}

	for (int i = 0; i < 100; i++) {
		cout << name[i];
	}

	
	system("pause");
	return 0;
}