#include<iostream>
#include<string>

using namespace std;
int main() {
	string romeo;
	string juliet;

	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���." <<endl;

	cout << "�ι̿� >>";

	getline(cin, romeo);

	cout << "�ٸ��� >>";

	getline(cin, juliet);

	if (romeo == "����" && juliet == "����") {
		cout << "�ٸ����� �̰���ϴ�." << endl;
	}
	else if (romeo == "����" && juliet == "����") {
		cout << "�����ϴ�." << endl;
	}
	else if (romeo == "��" && juliet == "����") {
		cout << "�ι̿��� �̰���ϴ�." << endl;
	}
	else if (romeo == "����" && juliet == "����") {
		cout << "�����ϴ�." << endl;
	}
	else if (romeo == "����" && juliet == "����") {
		cout << "�ι̿��� �̰���ϴ�." << endl;
	}
	else if (romeo == "��" && juliet == "����") {
		cout << "�ٸ����� �̰���ϴ�." << endl;
	}
	else if (romeo == "����" && juliet == "��") {
		cout << "�ι̿��� �̰���ϴ�." << endl;
	}
	else if (romeo == "����" && juliet == "��") {
		cout << "�ٸ����� �̰���ϴ�." << endl;
	}
	else if (romeo == "��" && juliet == "��") {
		cout << "�����ϴ�." << endl;
	}

	system("pause");

	return 0;
}