#include<cstdlib>

#include<ctime>

#include "Random.h"

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	int n = rand();
	return n;
}

int Random::nextInRange(int a,int b) {
	int n = rand()%(b-1)+a;
	return n;
}