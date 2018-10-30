#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("./student.txt");
    if(!fin){
        cout << "cannot open file";
        return 0;
    }

    string name, dept, sid;

    fin >> name;
    fin >> sid;
    fin >> dept;

    cout << name << endl;
    cout << sid << endl;
    cout << dept << endl;
    
    fin.close();
}