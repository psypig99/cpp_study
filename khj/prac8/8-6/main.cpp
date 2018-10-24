#include<iostream>
#include<string>

using namespace std;

class BaseArray {
private:
	int capacity;
	int *mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray {
	int head, tail;
	int size;
public:
	MyQueue(int capacity) : BaseArray(capacity) { this->head = 0; this->tail = -1; this->size = 0; }
	void enqueue(int n) {
		if (size == capacity()) return;
		put(head, n);
		head++;
		head = head % capacity();
		size++;
	};
	int dequeue() {
		if (size == 0) return -1;
		size--;
		tail++;
		tail = tail % capacity();
		return get(tail);
	};
	int capacity() { return getCapacity(); }
	int length() { return size; }

};

class MyStack : public BaseArray{
	int head, tail ,size;
public:
	MyStack(int capacity) :BaseArray(capacity) { this->head = 0; this->tail = -1; this->size = 0; }
	void push(int n);
	int pop();
	int capacity() { return getCapacity(); }
	int length() { return size; }
};

void MyStack::push(int n) {
	if (size == capacity()) return;
	put(head, n);
	head++;
	head = head % capacity();
	size++;
};

int MyStack::pop() {
	if (size == 0)return -1;
	size--;
	head--;
	return get(head);
}

int main() {

	MyStack mStack(100);
	int n;
	cout << "스택에 삽입할 5개의 정수를 입력하라 >> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n); //스택에 푸시
	}
	cout << "스택용량:" << mStack.capacity() << ", 스택크기:" << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>>";

	while (mStack.length() != 0) {
		cout << mStack.pop() << ' '; //스택에서 팝
	}

	cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;

	system("pause");
	return 0;
}