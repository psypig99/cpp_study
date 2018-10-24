#include <string>
#include <iostream>
using namespace std;

class LoopAdder {
	string name; //������ �̸�
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "") { this->name = name; }
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}

void LoopAdder::write() {
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}

void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}

class ForLoopAdder : public LoopAdder {
protected:
	int calculate() {
		int sum = 0;
		for (int i = getX(); i <= getY(); i++) {
			sum += i;
		}
		return sum;
	}
public:
	ForLoopAdder(string name) :LoopAdder(name) {};
};

class WhileLoopAdder : public LoopAdder {
public:
	int calculate() {
		int sum = 0;
		int a = getX();

		while (a<=getY())
		{
			sum += a;
			a++;
		}
		
		return sum;
	}

	WhileLoopAdder(string name) :LoopAdder(name) {};
};

class DoWhileLoopAdder : public LoopAdder {
protected:
	int calculate() {
		int sum = 0;
		int a = getX();

		do {
			sum += a;
			a++;
		} while (x <= getY());
		return sum;
	}
public :
	DoWhileLoopAdder(string name) : LoopAdder(name) {};
};

//int main() {
//	ForLoopAdder forLoop("For Loop");
//	forLoop.run();
//
//	system("pause");
//	return 0;
//}

int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	whileLoop.run();
	doWhileLoop.run();

	system("pause");

	return 0;
}