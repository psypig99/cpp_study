#include<iostream>

using namespace std;

class Sample {
	int *p;
	int size;
	int max;
public:
	Sample(int n) {
		size = n;
		p = new int[n];
	}
	void read() {
		for (int i = 0; i < size; i++) {
			cin >> p[i];
		}
	};
	void write() {
		for (int i = 0; i < size; i++) {
			cout << p[i] << ' ';
		}
		cout << ' ' << endl;
	};
	int big() {
		for (int i = 0; i < size; i++) {
			if (max < p[i]) {
				max = p[i];
			}
		}
		return max;
	};
	~Sample() {};
};

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;

	// 100 4 -2 9 55 300 44 38 99 -500
	system("pause");
	return 0;
}