#include <iostream>
using namespace std;

class Rectangle {
    public :
        int width;
        int height;
        int getArea();
};

int Rectangle::getArea(){
    return width * height;
}

int main(){
    Rectangle rectangle;
    rectangle.width = 5;
    rectangle.height = 4;
    int area = rectangle.getArea();

    cout << "rectangle의 사이즈는 " << area << "입니다. " << endl;
}