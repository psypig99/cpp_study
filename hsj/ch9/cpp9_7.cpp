#include <iostream>
using namespace std;

class Calculator {
    void input(){
        cout << "input 2 numbers >>" ;
        cin >> a >> b ;

    }
    protected : 
        int a, b;
        virtual int calc(int a, int b)=0;
    public : 
        void run(){
            input();
            cout << "result is " << calc(a, b) << endl;
        }
};

class Adder : public Calculator {
    protected : 
        int calc(int a, int b){
            return a + b;
        }
};

class Substractor : public Calculator {
    protected : 
        int calc(int a, int b){
            return a - b;
        }
};

int main(){
    Adder adder;
    Substractor substractor;

    adder.run();
    substractor.run();
}