#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v;
	int a;
	double avg=0;
	bool result=true;
	while (result)
	{
	cout << "정수를 입력하세요(0을 입력하면 종료)>>";
	cin >> a;
	if (a == 0) return false;
	v.push_back(a);
	for (int i = 0; i < v.size(); i++) {
		avg+=v.at(i);
	}
	avg = avg / v.size();
	cout << "평균 =" << avg <<endl;
	}

	
	system("pause");
	return 0;
}