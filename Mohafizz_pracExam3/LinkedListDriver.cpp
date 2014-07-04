#include "node.h"
#include <iostream>
#include <string>
using namespace std;

node * nodeNew(int value, node * next){
node * n = new node;
n->value = value;
n->next = next;
return n; 
}

void listPrint(const node* p)
{
    while( p!= 0 ){
      cout << p->value << " ";
      p = p->next;
   }
   cout << endl;
}

//Implement your code here and return the updated linked list.  
node* newHead(node * head){

	if(head==NULL)
	{
		cout << "Empty list!" << endl;
	}
	else 
	{
		node* cur = head;
		node* prev = NULL;

		//Traverse list to insert in the correct place
		while(cur!=NULL)
		{
			if(cur->value > head->value)
			{
				break;
			}
			else 
			{
				prev = cur;
				cur = cur->next;
			}
		}
		prev->next = cur->next;
		cur->next = head;
		head = cur;
	}
	return head;
}

int main(){
 node * head = 0;
 head = nodeNew(10, head); 
 head = nodeNew(20, head);
 head = nodeNew(5, head);
 head = nodeNew(11, head);
 listPrint(head);
 listPrint(newHead(head));
}