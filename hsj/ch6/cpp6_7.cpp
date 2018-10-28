#include <iostream>
using namespace std;

float square(float a) {
    return a*a;
}

double square(double a){
    return a*a;
}

int main(){
    square(3.0);
    square(float(3));
}