#include<iostream>
#include<string>

using namespace std;

class BaseMemory {
	char *mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
};

class ROM : public BaseMemory {
	int capacity, size, result;
	char a[];
public:
	ROM(int size, char a[], int capacity) :BaseMemory(size) { this->capacity = capacity; this->size = size; }
	int read(int n);
};

int ROM::read(int n) {
	return this->result=a[n];
};

class RAM : public BaseMemory {
	int size,n,result;
	char a[];
public:
	RAM(int size) :BaseMemory(size) { this->size = size; this->n = 0; this->result = 0; }
	void write(int n, int result);
	char read(int n);
};

void RAM::write(int n,int result) {
	a[n] = result;
};

char RAM::read(int n) {
	return a[n];
};

int main() {

	char x[5] = {'h','e' ,'l' ,'l' ,'o'};
	ROM biosROM(1024*10,x,5); //10kb�� ROM �޸�, �迭 x�� �ʱ�ȭ��.
	RAM mainMemory(1024*1024); //1MB�� RAM �޸�

	//0�������� 4�������� biosROM���� �о� mainMemory�� ����
	for (int i = 0; i < 5; i++) { mainMemory.write(i, biosROM.read(i)); }

	for (int i = 0; i < 5; i++) { cout << mainMemory.read(i); }

	system("pause");
	return 0;
}