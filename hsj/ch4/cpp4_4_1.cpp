#include <iostream>
using namespace std;

class Sample{
    int a;
public :
    Sample() { a = 100; cout << a << '!';}
    Sample(int x) { a = x; cout << a << '@';}
    Sample(int x , int y) {a = x*y; cout << a << '#';}
    int get(){return a;}
};

int main(){
    Sample arr[3];

    for(int i = 0; i < 3; i++){
        cout << arr[i].get() << endl;
    }

    Sample arr2D[2][2] = {{Sample(2,3), Sample(2,4)}, {Sample(5), Sample()}};
    for(int i=0; i < 2; i++){
        for(int j=0; j < 2; j++){
            cout << "arr2D[" << i << "," << j << "]은 ";
            cout << arr2D[i][j].get() << endl;
        }
    }
}