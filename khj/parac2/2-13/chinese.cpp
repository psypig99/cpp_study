#include<iostream>

using namespace std;

int main() {
	int menu = 0;
	int peopleNum = 0;

	cout << "***** �����忡 ���� ���� ȯ���մϴ�. *****";
	while (true){
		cout << "«��:1, ¥��:2, ������:3, ����:4 >>  ";
		cin >> menu;

	if (menu > 4) {
		cout << "�ٽ� �ֹ��ϼ���!!";
	}
	else if (menu < 4) {
		cout << "���κ�?";
		cin >> peopleNum;
		if (menu == 1) {
			cout << "«�� " << peopleNum << "�κ� ���Խ��ϴ�." << endl;
		}
		else if (menu == 2) {
			cout << "¥�� " << peopleNum << "�κ� ���Խ��ϴ�." << endl;
		}
		else if (menu == 3) {
			cout << "������ " << peopleNum << "�κ� ���Խ��ϴ�." << endl;
		}
	}
	else if (menu==4) {
		cout << "���� ������ �������ϴ�." << endl;
		return false;
	}
	else {
		return false;
	}

	} //while end;


	system("pause");
	return 0;
}