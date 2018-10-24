#include<iostream>
#include<string>

using namespace std;

int main() {
	string password;
	string repassword;

	cout << "새 암호를 입력하세요 >>";
	getline(cin, password);

	cout << "새 암호를 다시 한 번 입력하세요 >>";
	getline(cin, repassword);

	if (password == repassword) {
		cout << "같습니다.";
	}
	else
	{
		cout << "같지 않습니다.";
	}
	system("pause");
	return 0;
}