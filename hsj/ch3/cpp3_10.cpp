#include <iostream>
using namespace std;

struct StructCircle {
    private :
        int radius;
    public :
        StructCircle(int r) {
            radius = r;
        }
        double getArea();
};

double StructCircle::getArea(){
    return 3.14 * radius * radius;
}

int main(){
    StructCircle waffle(3);
    double area = waffle.getArea();

    cout << "사이즈는 " << area << endl;
}