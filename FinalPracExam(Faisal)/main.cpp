#include <iostream>
#include "Node.h"
#include "CircularQueue.h"

using namespace std;

int main()
{
	CircularQueue* qlist = new CircularQueue;

	qlist->add(5, 2);
	qlist->display();
	qlist->add(5, 2);
	qlist->display();
 	*qlist - (2);
 	qlist->display();	
	return 0;
}