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
	cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
	cin >> a;
	if (a == 0) return false;
	v.push_back(a);
	for (int i = 0; i < v.size(); i++) {
		avg+=v.at(i);
	}
	avg = avg / v.size();
	cout << "��� =" << avg <<endl;
	}

	
	system("pause");
	return 0;
}