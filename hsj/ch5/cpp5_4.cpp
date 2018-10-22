#include <iostream>
using namespace std;

class Circle {
private :
    int radius;
public : 
    Circle(){ radius = 1;}
    Circle(int radius) {this->radius = radius;}
    ~Circle(){}
    void setRadius(int radius) { this->radius = radius ; }
    double getArea(){return 3.14 * radius * radius ;}
};

int main(){
    Circle circle;
    Circle &refc = circle;
    refc.setRadius(10);
    cout << refc.getArea() << circle.getArea() << endl;
}