#include<iostream>

using namespace std;


//int add(int num1[], int num2) {
//	int result=0;
//	for (int i = 0; i < num2; i++) {
//		result += num1[i];
//	}
//	return result;
//};
//
//int add(int num1[], int num2, int num3[]) {
//	return add(num1, num2) + add(num3, num2);
//}

int add(int num1[],int num2,int num3[]=NULL) {
	int result = 0;

	for (int i = 0; i < num2; i++) {
		result += num1[i];
	}

	if (num3 == NULL) {
		return result;
	}

	for (int j = 0; j < num2; j++) {
		result += num3[j];
	}

	return result;
}

int main() {
	int a[] = {1,2,3,4,5};
	int b[] = {6,7,8,9,10};

	int c = add(a,5); //�迭 a�� ������ ��� ���� �� ����

	int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ����

	cout << c << endl; //15 ���
	cout << d << endl; //55 ���

	system("pause");

	return 0;
}