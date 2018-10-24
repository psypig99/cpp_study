#include<iostream>

using namespace std;

template<class T>
void reverseArrays(T data1[], int a) {
	T temp;
	for (int i = 0; i < a/2; i++) {
		temp = data1[i];
		data1[i] = data1[a-1-i];
		data1[a - 1 - i] = temp;
	}
}


int main() {
	int x[] = { 1, 10, 100, 5, 4 };


	reverseArrays(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';

	system("pause");
	return 0;
}