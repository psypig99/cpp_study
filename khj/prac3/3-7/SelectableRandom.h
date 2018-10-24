#pragma once

#include<string>

class SelectableRandom{
public :
	SelectableRandom();
	int EvenNext();
	int OddNextInRange(int a,int b);
};