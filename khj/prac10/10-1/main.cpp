#include<iostream>

using namespace std;

template<class T> T biggest(T data[],int a) {
	T sum = 0;
	for (int i = 0; i < a; i++) {
		if (sum < data[i]) {
			sum = data[i];
		}
	}
	return sum;
}

int main() {
	int x[] = { 1,10,100,5,4 };


	cout << biggest(x, 5) << endl;
	system("pause");
	return 0;
}