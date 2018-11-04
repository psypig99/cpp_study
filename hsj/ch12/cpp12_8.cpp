#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const char* file = "cpp12_3.cpp";

    ifstream fin;
    fin.open(file, ios::in | ios::binary);
    if(!fin){
        cout << "file open error";
        return 0;
    }

    int count = 0;
    char s[32];
    while(!fin.eof()){
        fin.read(s, 32);
        int n = fin.gcount();
        cout.write(s,n);
        count += n;
    }
    cout << endl;
    cout << "읽은 바이트 수는 " << count << endl;
    fin.close();
}