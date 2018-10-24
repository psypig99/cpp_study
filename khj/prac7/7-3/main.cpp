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
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
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

};

int main() {
	Book book("벼룩시장", 0, 500);

	if (!book) cout << "공짜다" << endl;

	system("pause");
	return 0;
}