#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    string address("인천광역시 부평구 부평동");
    string copyAddress(address);

    char text[] = {'L', 'O', 'v', 'e', ' ', 'c','p','p', '\0'};
    string title(text);

    cout << str << endl;
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;
}