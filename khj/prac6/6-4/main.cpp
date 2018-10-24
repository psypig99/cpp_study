#include <iostream>
#include "MyVector.h"

using namespace std;

int main() {
	MyVector *v1, *v2;

	v1 = new MyVector();
	v2 = new MyVector(200, 653);

	delete v1;
	delete v2;

	system("pause");
	return 0;
}