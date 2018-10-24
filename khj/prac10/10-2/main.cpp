#include<iostream>

using namespace std;

template<class T1>
T1 equalArrays(T1 data1[], T1 data2[], int a) {
	for (int i = 0; i < a; i++) {
		if (data1[i] != data2[i]) {
			return false;
		}
	}
	return true;
}


int main() {
	int x[] = {1, 10, 100, 5, 4};
	int y[] = {1, 10, 100, 5, 4};
	
	if (equalArrays(x, y, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;
	system("pause");
	return 0;
}