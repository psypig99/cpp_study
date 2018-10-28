#include <iostream>
using namespace std;

class Circle{
    int radius;
    public : 
        Circle(int radius=1){ this->radius = radius; }
        int getRadius(){ return this->radius; }
};

template <class T>
void mySwap(T &a, T &b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 4, b = 5;
    mySwap(a, b);
    cout << a << " , " << b << endl;

    double c = 0.3, d = 0.6;
    mySwap(c, d);
    cout << c << " , " << d << endl;

    Circle donut(5), pizza(20);
    mySwap(donut, pizza);
    cout << "donut radius is " << donut.getRadius() << endl;
    cout << "pizza radius is " << pizza.getRadius() << endl;
}