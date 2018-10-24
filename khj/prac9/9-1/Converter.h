#pragma once
#include <iostream>
#include <string>

using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0; //src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString() = 0; //src ���� ��Ī
	virtual string getDestString() = 0; //dest ���� ��Ī
public :
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};