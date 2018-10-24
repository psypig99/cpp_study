#include <iostream>
#include <string>

using namespace std;

class Book {
	string title;
	int price, pages;

public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }

	bool operator ==(int a) {
		if (this->price == a) { return true; }
		else {
			return false;
		}
	};


	bool operator ==(string a) {
		if (this->title == a) { return true; }
		else {
			return false;
		}
	};

	bool operator ==(Book a) {
		if (this->price == a.price && this->title == a.title && this->pages == a.pages) {
			return true;
		}
		else {
			return false;
		}
	};

	bool operator !() {
		if (this->price == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator < (string s, Book a) {
		if (s < a.title) return true; 
		else return false;
	}
};

int main() {
	Book a("û��",20000,300);
	string b;
	cout << "å�̸��� �Է��ϼ���>>";
	getline(cin, b);
	if (b < a) cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;

	system("pause");
	return 0;
}