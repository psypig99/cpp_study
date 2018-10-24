#pragma once
#include <string>
#include "Converter.h"

class KimToMile : public Converter{
protected:
	virtual double convert(double src);
	virtual string getSourceString() { return "Km"; };
	virtual string getDestString() { return "Mile"; }
public:
	KimToMile(double ratio) :Converter(ratio) {};
};

double KimToMile::convert(double src) {
	return src / ratio;
}