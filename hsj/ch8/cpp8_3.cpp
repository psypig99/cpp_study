#include <iostream>
#include <string>
using namespace std;

class TV {
    int size;
public : 
    TV() { size = 20; }
    TV(int size){ this->size = size; }
    int getSize() { return this->size; }
};

class WideTV : public TV {
    bool videoIn;
public : 
    WideTV(int size, bool videoIn) : TV(size) {
        this->videoIn = videoIn;
    }
    bool getVideoIn() { return videoIn; }
};

class SmartTV : public WideTV {
    string ipAddr;
public :
    SmartTV(string ipAddr, int size) : WideTV(size, true){
        this->ipAddr = ipAddr;
    }
    string getIpAddr(){ return this->ipAddr; }
};

int main(){
    SmartTV htv("192.168.2.111", 32);
    cout << "size = " << htv.getSize() << endl;
    cout << "videoIn = " << htv.getVideoIn() << endl;
    cout << "ipAddr = " << htv.getIpAddr() << endl;
}