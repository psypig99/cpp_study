#include<cstdlib>
#include<ctime>

#include "SelectableRandom.h"

SelectableRandom::SelectableRandom(){
	srand((unsigned)time(0));
}

int SelectableRandom::EvenNext() {
	return rand() / 2 * 2;
}

int SelectableRandom::OddNextInRange(int a ,int b) {
	return (rand() % (b - a) + a)/2*2+1;
}