#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string name, dept;
    string sid;

    cout << "이름 >> ";
    getline(cin, name);
    cout << "학번(숫자로) >> ";
    getline(cin, sid);
    cout << "학과 >> ";
    getline(cin, dept); // 이 부분에서 리턴값이 적용되어버림. 

    ofstream fout("./student.txt");
    if(!fout){
        cout << "cannot open student.txt";
        return 0;
    }

    fout << name << endl;
    fout << sid << endl;
    fout << dept << endl;

    fout.close();
}

// int main(){
//     char name[10], dept[20];
//     int sid;

//     cout << "이름 >> ";
//     cin >> name;
//     cout << "학번(숫자로) >> ";
//     cin >> sid;
//     cout << "학과 >> ";
//     cin >> dept;

//     ofstream fout("./student.txt");
//     if(!fout){
//         cout << "cannot open student.txt";
//         return 0;
//     }

//     fout << name << endl;
//     fout << sid << endl;
//     fout << dept << endl;

//     fout.close();
// }
