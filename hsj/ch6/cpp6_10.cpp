#include <iostream>
using namespace std;

class Math {
public :
    static int abs(int a){return a>0 ? a : -a;}
    static int max(int a, int b) { return a>b ? a : b;}
    static int min(int a, int b) { return a<b ? a : b;}
};

int main(){
    cout << Math::abs(-4) << endl;
    cout << Math::max(3,5) << endl;
    cout << Math::min(1, -1) << endl;
}