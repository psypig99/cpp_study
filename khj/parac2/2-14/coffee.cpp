#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char coffee[100];
	int num=0;
	int cost=0;

	while (cost <20000)
	{
		cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
		cout << "�ֹ� >> ";
		cin >> coffee >> num;

		if (strcmp(coffee, "����������") == 0) {
			cout << 2000 * num << "���Դϴ�. ���ְ� �弼��" << endl;
			cost = cost + 2000 * num;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			cout << 2300 * num << "���Դϴ�. ���ְ� �弼��" << endl;
			cost = cost + 2300 * num;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			cout << 2500 * num << "���Դϴ�. ���ְ� �弼��" << endl;
			cost = cost + 2500 * num;
		}
		else {
			cout << "�ٽ� �Է����ּ���." << endl;
		}

	}
	cout << "���� " << cost << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;

	system("pause");
	return 0;
}