#include <iostream>

#include "Person.h"

using namespace std;

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();

	system("pause");
	return 0;
}