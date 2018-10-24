#include<iostream>
#include<string>

using namespace std;

int main() {
	string word;
	cout << "문자열 입력 >>";
	getline(cin, word, '\n');

	//char A1 = word.at[0];
	//char A2 = word.at[9];
	//char A3 = word.at[17];

	//cout << A1 << A2 << A3 << endl;

	int index = word.find('a');
	int index2 = word.find('a', index + 1);
	int index3 = word.find('a', index2 + 1);

	cout << index << index2 << index3 << endl;

	system("pause");
	return 0;
}