#include <iostream>
using namespace std;

void sendMessage(const char* msg){
    cout << msg << endl;
}

class Window{
    public : 
        void sendMessage(const char* msg){
            cout << "Windows msg : " << msg << endl;
        }
        void run(){
            ::sendMessage("Global Hello");
            sendMessage("Local Hello");
        }
};

int main(){
    Window window;
    window.run();
}