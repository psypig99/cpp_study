#include<iostream>

using namespace std;

#include "EvenRandom.h"

#include<cstdlib>

#include<ctime>

EvenRandom::EvenRandom(){
	srand((unsigned)time(0));
}

int EvenRandom::EvenNext() {
	return rand() / 2 * 2;
}

int EvenRandom::EvenNextInRange(int a,int b) {
	return (rand()%(b-a+1)+a)/2*2;
}

