#include<iostream>

#include "Color.h"

using namespace std;

int main() {
	Color screenColor(255, 0, 0);
	Color *p;
	p = &screenColor; // (1)�� ����
	p->show(); // (2)�� ����
	Color colors[3]; // (3)�� ����
	p = colors; // (4)�� ����

	// (5)�� ����
	colors[0].setColor(255, 0, 0);
	colors[1].setColor(0, 255, 0);
	colors[2].setColor(0, 0, 255);

	// (6)�� ����
	for (int i = 0; i < 3; i++) {
		p->show();
		p++;
	}

	system("pause");
	return 0;
}