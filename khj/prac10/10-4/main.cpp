#include<iostream>

using namespace std;

template<class T>
T search(T find,T data[],T size) {
	for (int i = 0; i < size; i++) {
		if (data[i] == find) return true;
	}
	return false;
}


int main() {
	int x[] = { 1,10,100,5,4 };
	if (search(100, x, 5)) cout << "100이 배열 x에 포함되어 있다.";
	else cout << "100이 배열 x에 포함되어 있지 않다.";
	system("pause");
	return 0;
}