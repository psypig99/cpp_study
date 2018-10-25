#include <iostream>
using namespace std;

class Calculator {
    public : 
        virtual int add(int a, int b) = 0;
        virtual int minus(int a, int b) = 0;
        virtual double average(int a[], int size) = 0;
};

class GoodCalc : public Calculator{
    public : 
        int add(int a, int b) override { return a+b; }
        int minus(int a, int b) override { return a-b; }
        double average(int a[], int size){
            double sum = 0;
            for(int i=0; i < size; i++){
                sum += a[i];
            }
            return sum/size;
        }
};

int main(){
    int a[] = {1,2,3,4,5};
    Calculator *p = new GoodCalc();
    cout << p->add(2,3) << endl;
    cout << p->minus(2,3) << endl;
    cout << p->average(a, 5) << endl;
    delete p;
}