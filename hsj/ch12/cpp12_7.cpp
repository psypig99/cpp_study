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

    int c;
    while((c=fsrc.get()) != EOF){
        fdest.put(c);
    }
    cout << srcFile << "을" << destFile << "copy Complete" << endl;
    fsrc.close();
    fdest.close();
}