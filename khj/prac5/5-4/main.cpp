#include <iostream>

using namespace std;

bool bigger(int a, int b, int &big) {
	if (a == b) { return true; }
	if (a > b) { big = a; }
	else if (b < a) { big = b; }
	return false;
}

int main() {
	int a,b,big;
	
	bool result;

	cout << "2개의 정수를 입력하세요.";
	cin >> a >> b;

	result = bigger(a, b, big);

	if (result) cout << "same" << endl; else cout << big << endl;

	system("pause");
	return 0;
}