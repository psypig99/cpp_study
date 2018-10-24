#include "Converter.h"
#include "WonToDollar.h"
#include "KmToMile.h"

int main() {
	//WonToDollar wd(1010);
	//wd.run();
	KimToMile toMile(1.609344);
	toMile.run();

	system("pause");
	return 0;
}