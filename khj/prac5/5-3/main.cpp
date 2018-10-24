#include<iostream>
#include<string>
using namespace std;

string combine(string &text1,string &text2,string &text3) {
	return text3 = text1.append(' '+text2);
}


int main() {
	string text1("I Love you"), text2("very much");
	string text3;

	combine(text1, text2, text3);
	cout << text3 <<endl;

	system("pause");
	return 0;
}