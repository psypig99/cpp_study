#include<iostream>

using namespace std;

class ArrayUtility2
{
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int *s3 = new int[size * 2];

	for (int i = 0; i < size; i++) {
		s3[i] = s1[i];
		s3[i + size] = s2[i];
	}
	return s3;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int *s3 = new int[size];
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				s1[i] == NULL;
			}
		}
	
	}

	for (int i = 0; i < size; i++) {
		if (s1[i] != NULL) {
			retSize++;
		}
	}
	
	int n = 0;
	for (int i = 0; i < size; i++) {
		if (s1[i] != NULL) {
			s3[n] = s1[i];
			n++;
		}
	}

	if (retSize == 0) {
		return NULL;
	}
	else {
		return s3;
	}

}

int main() {
	int x[5], y[5], retsize = 0, size;

	cout << "정수를 5개 입력하라. 배열 x에 삽입한다 >> ";
	cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];

	cout << "정수를 5개 입력하라. 배열 y에 삽입한다 >> ";
	cin >> y[0] >> y[1] >> y[2] >> y[3] >> y[4];

	cout << "합친 정수 배열을 출력한다." << endl;


	return 0;
}