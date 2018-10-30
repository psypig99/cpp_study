#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const char* srcFile = "desert.jpeg";
    const char* destFile = "copydesert.jpeg";

    ifstream fsrc(srcFile, ios::in | ios::binary);
    if(!fsrc){
        cout << srcFile << "open error" << endl;
        return 0;
    }

    ofstream fdest(destFile, ios::out | ios::binary);
    if(!fdest){
        cout << destFile << "open error" << endl;
        return 0;
    }

    char buf[1024];
    while(!fsrc.eof()){
        fsrc.read(buf, 1024);
        int n = fsrc.gcount();
        fdest.write(buf, n);
    }

    cout << srcFile << "을" << destFile << "로 복사완료" << endl;
    fsrc.close();
    fdest.close();
}