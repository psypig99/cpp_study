#include<iostream>

using namespace std;

template<class T>
T* concat(T data1[], T size1, T data2[], T size2) {

	T size = size1 + size2;
	T* temp = new T[size];

	for (int i = 0; i < size1; i++) {
		temp[i] = data1[i];
	}

	for (int j = 0; j < size2; j++) {
		temp[size1] = data2[j];
		size1++;
	}

	return temp;
}

int main() {
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6,7 };

	int *tem = concat(a, 3, b, 4);
	
	for (int i = 0; i < 7; i++) {
		cout << tem[i] << ' ' ;
	}

	delete [] tem;
	system("pause");
	return 0;
}