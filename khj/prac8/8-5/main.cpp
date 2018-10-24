#include<iostream>
#include<string>

using namespace std;

class BaseArray {
private :
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

class MyQueue : public BaseArray{
	int head,tail;
	int size;
public :
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

int main() {

	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>>";

	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}

	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;

	system("pause");
	return 0;
}