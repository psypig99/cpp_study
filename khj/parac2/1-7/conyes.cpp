#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char answer[20];

	while (true)
	{
		cout << "종료하고 싶으면 yes를 입력하세요 >>";
		cin.getline(answer, 20, '\n');
		if (answer[0] == 'y' && answer[1] == 'e' && answer[2] == 's') {
			cout << "종료합니다...";
			break;
		}
	}

	system("pause");
	return 0;
}
