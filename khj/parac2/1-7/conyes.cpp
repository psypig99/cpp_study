#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char answer[20];

	while (true)
	{
		cout << "�����ϰ� ������ yes�� �Է��ϼ��� >>";
		cin.getline(answer, 20, '\n');
		if (answer[0] == 'y' && answer[1] == 'e' && answer[2] == 's') {
			cout << "�����մϴ�...";
			break;
		}
	}

	system("pause");
	return 0;
}
