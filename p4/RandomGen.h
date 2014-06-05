#ifndef RANDOMGEN_H
#define RANDOMGEN_H
#include <iostream>
#include <string>

using namespace std;

class genIntegers
{
	int size;
public:
	genIntegers(int);
	void setSize(int);
	int getSize();
};
#endif