#include<iostream>
#include<string>

using namespace std;

int main(){
	string name;
	string address;
	string age;
	
	cout << "�̸���?";
	getline(cin, name);

	cout << "�ּҴ�?";
	getline(cin, address);

	cout << "���̴�?";
	getline(cin, age);

	cout << name << ", " << address << ", " << age << "��" << endl;

	system("pause");
	return 0;
}