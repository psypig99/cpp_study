#include <iostream>
#include <fstream>
using namespace std;

long getFileSize(ifstream &fin){
    fin.seekg(0, ios::end);
    long length = fin.tellg();
    return length;
}

int main(){
    const char* file = "cpp12_1.cpp";

    ifstream fin(file);

    if(!fin){
        cout << file << "open error" << endl;
        return 0;
    }

    cout << file << "size is " << getFileSize(fin);
    fin.close();
}