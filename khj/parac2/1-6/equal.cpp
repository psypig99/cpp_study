#include<iostream>
#include<string>

using namespace std;

int main() {
	string password;
	string repassword;

	cout << "�� ��ȣ�� �Է��ϼ��� >>";
	getline(cin, password);

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� >>";
	getline(cin, repassword);

	if (password == repassword) {
		cout << "�����ϴ�.";
	}
	else
	{
		cout << "���� �ʽ��ϴ�.";
	}
	system("pause");
	return 0;
}