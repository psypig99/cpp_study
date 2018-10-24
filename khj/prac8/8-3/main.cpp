#include<iostream>
#include<string>
using namespace std;


class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point{
	int a,b;
	string color;
public :
	ColorPoint(int a, int b, string color) : Point(a,b) { this->a = a; this->b = b; this->color = color; }
	void setPoint(int a, int b) { this->a = a;  this->b = b;}
	void setColor(string color) { this->color = color; }
	void show() { cout << color << "색으로 (" << a << "," << b << ")에 위치한 점입니다." << endl; }
};

int main() {
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();

	system("pause");
	return 0;
}