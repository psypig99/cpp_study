#pragma once
#include <string>
#include "Converter.h"

class WonToDollar : public Converter{
protected:
	virtual string getSourceString() { return "��"; }
	virtual string getDestString() { return "�޷�"; }
	virtual double convert(double src);
public :
	WonToDollar(double ratio):Converter(ratio) {}
};

double WonToDollar::convert(double src) {
	return src / ratio;
}