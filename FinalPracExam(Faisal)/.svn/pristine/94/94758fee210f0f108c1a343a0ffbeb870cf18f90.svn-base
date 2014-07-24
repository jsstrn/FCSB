#ifndef CIRCULAR_QUEUE
#define CIRCULAR_QUEUE

#include "Node.h"

/*
 * A Circular queue is a queue whose last element connects back to the first element
 *
 * @author Amali Weerasinghe
 * @date 6 June 2014
 */

class CircularQueue{

 public:

  /* constructor
   * constructs an empty queue
   */
  CircularQueue();
     
    
  /* destructor
   */
  ~CircularQueue();

  /* checks whether the circular queue is empty
   * @return True if the circular queue is empty, False otherwise 
   */
  bool isEmpty();
    
    
  /* Adds element to the nth position of the circular queue
   * @param int the element to be added to the circular queue
   * @param int the position on which the element is to be added. 
   * Assume that the first node is considered to be node 1. Assume that it 
   * is always possible to add the element to the given position.
   */  
  void add (int element, int position);

  void display();
    
    
  /* overloaded - operation.  Deletes an element from the given position
   * for example: myQueue - 5, will delete the 5th element from myQueue
   * @param int the position from which the element is to be deleted
   * @return int the element deleted
   */
  int operator - (int position);



 private:
  Node *head;  // The head of the queue
  int size;    //number of elements
  
};

#endif
