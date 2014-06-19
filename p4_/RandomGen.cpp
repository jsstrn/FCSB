#include <iostream>
#include <string>
#include "RandomGen.h"

using namespace std;

genIntegers::genIntegers(int s)
{	
	size = s;

}
void genIntegers::setSize(int s)
{
	s = size;

}
int genIntegers::getSize()
{
	return size;
}

