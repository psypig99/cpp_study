#include<iostream>

using namespace std;

class AbstractStack {
public :
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;

	virtual int size() = 0;
};

class IntStack : public AbstractStack{
	int *stack;
	int height;
	int gene;
public:
	IntStack(int size) { this->gene = gene; stack[size]; this->height = 0; }
	bool push(int n) override;
	bool pop(int& n) override;
	int size() override;
};

bool IntStack::push(int n) {
	if (gene - 1 == height) return false;
	stack[height] = n;
	height++;
	return true;
};

bool IntStack::pop(int& n) {
	if (height == 0) return false;
	n = stack[height];
	height--;
	return true;
};

int IntStack::size() {
	return height;
};

int main() {
	int a, b, c;

	IntStack ne(20);

	cin >> a >> b >> c;

	cout << ne.push(a);
	cout << ne.push(b);
	cout << ne.push(c);


	cout << ne.size();


	system("pause");
	return 0;
}