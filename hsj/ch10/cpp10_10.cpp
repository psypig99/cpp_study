#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> sv;
    string name;

    cout << "Enter the 5 names >> " << endl;
    for(int i=0; i<5; i++){
        cout << i+1 << ">>";
        getline(cin, name);
        sv.push_back(name);
    }

    name = sv.at(0);
    for(int i=1; i<sv.size(); i++){
        if(name < sv[i]){
            name = sv[i];
        }
    }
    cout << "마지막 이름은 ???  " << name << endl;
}