#include<iostream>

using namespace std;

class MyInStack {
	int *p;
	int size;
	int tos;

public:
	MyInStack();
	MyInStack(int size);
	MyInStack(MyInStack &s);
	~MyInStack() { delete[]p; }
	bool push(int n);
	bool pop(int &n);
};

MyInStack::MyInStack(int size) {
	this->tos = -1;
	this->size = size;
	p = new int[size];

}

MyInStack::MyInStack(MyInStack &s) {
	this->p = new int[s.size];
	this->size = s.size;
	this->tos = s.tos;
	for (int i = 0; i <= s.tos; i++) {
		this->p[i] = s.p[i];
	}
}

bool MyInStack::push(int n) {
	tos++;
	if (tos == 10) return false;
	else {
		p[tos] = n;
		return true;
	}
}

bool MyInStack::pop(int &n) {
	if (tos == -1) return false;
	else {
		n = p[tos];
		return true;
	}
	tos--;
}

int main() {
	MyInStack a(10);
	a.push(10);
	a.push(20);
	MyInStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;

	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;

	system("pause");
	return 0;
}