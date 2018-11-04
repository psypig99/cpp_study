#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void fileRead(vector<string> &v, ifstream &fin){
    string line;
    while(getline(fin, line)){
        v.push_back(line);
    }
}

void search(vector<string> &v, string word){
    for(int i=0; i < v.size(); i++){
        int index = v[i].find(word);
        if(index != -1)
            cout << v[i] << endl;
    }
}

int main(){
    vector<string> wordVector;
    ifstream fin("words.txt");
    if(!fin){
        cout << "cannot open words.txt" << endl;
        return 0;
    }
    fileRead(wordVector, fin);
    fin.close();

    cout << "reads the words.txt" << endl;
    while(true){
        cout << "enter the word to search >> " ; 
        string word;
        getline(cin, word);
        if(word == "exit") break;
        search(wordVector, word);
    }
    cout << "exit the program" << endl;
}