#include <iostream>
using namespace std;

class Circle {
    public :
        int radius;
        Circle();
        Circle(int r);
        double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main(){
    Circle donut;
    double area = donut.getArea();
    cout << "donut의 area는 " << area << " 입니다." << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza의 area는 " << area << " 입니다. " << endl;
}