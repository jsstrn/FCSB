#include <iostream>
#include <string>
#include "RandomGen.h"

using namespace std;

int main()
{
	int temp;
	int size;

	cout << "* * * * * * * * Welcome * * * * * * * * * *" << endl;
	cout << "Please enter a number of integers you want the ";
	cout << "Random Number Generator to generate." << endl;
	cin >> temp;
	genIntegers *randomInt = new genIntegers(temp);
	size = randomInt->getSize();
	int inum[size];
	for(int i=0; i < size; i++)
	{
		// genrate a random number between 1 to 100
		inum[i] = rand() % 100 + 1; 
	}

	return 0;
}