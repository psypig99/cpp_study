#include<iostream>

using namespace std;

int main() {
	int menu = 0;
	int peopleNum = 0;

	cout << "***** 형준장에 오신 것을 환영합니다. *****";
	while (true){
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4 >>  ";
		cin >> menu;

	if (menu > 4) {
		cout << "다시 주문하세요!!";
	}
	else if (menu < 4) {
		cout << "몇인분?";
		cin >> peopleNum;
		if (menu == 1) {
			cout << "짬뽕 " << peopleNum << "인분 나왔습니다." << endl;
		}
		else if (menu == 2) {
			cout << "짜장 " << peopleNum << "인분 나왔습니다." << endl;
		}
		else if (menu == 3) {
			cout << "군만두 " << peopleNum << "인분 나왔습니다." << endl;
		}
	}
	else if (menu==4) {
		cout << "오늘 영업은 끝났습니다." << endl;
		return false;
	}
	else {
		return false;
	}

	} //while end;


	system("pause");
	return 0;
}