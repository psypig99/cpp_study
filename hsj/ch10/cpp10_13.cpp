#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;

    int n;
    cout << "input 5 numbers >> " ;
    for(int i=0; i < 5; i++){
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    vector<int>::iterator it;

    for(it=v.begin(); it != v.end(); it++){
        cout << *it << "\t";
    }
    cout << endl;
}