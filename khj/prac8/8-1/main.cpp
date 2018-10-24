#include<iostream>
#include<string>

using namespace std;

class Circle {
	int radius;
public :
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
};


class NamedCircle:public Circle{
	int radius;
	string name;
public:
	NamedCircle(int radius=0, string name="") { this->radius = radius; this->name = name; }
	void show() { cout << "반지름이 " << radius << "인 " << name<<endl; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

int main() {
	int radius;
	string name;
	int p = 0;
	NamedCircle waffle(3, "waffle");
	waffle.show();

	NamedCircle pizza[5];
	
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요." <<endl;
	
	for(int i = 0; i < 5; i++) {
		cout << i + 1 << ">>";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
		cout << endl;
	};

	for (int j = 0; j < 5; j++) {
		if (p < pizza[j].getArea()) {
			p = pizza[j].getArea();
		}
	};

	for (int n = 0; n < 5; n++) {
		if (p == pizza[n].getArea()) {
			name = pizza[n].getName();
		}
	}

	cout << "가장 면적이 큰 피자는 " << name << "입니다.";

	system("pause");
	return 0;
}
