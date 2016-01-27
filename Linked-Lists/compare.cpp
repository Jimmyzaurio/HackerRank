/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
  Node* A = headA;
  Node* B = headB;
    
  for (; A && B; A=A->next, B=B->next) {    
    if (A->data != B->data)
      return 0;
  }
  if (A != B)
    return 0;
  return 1;
}
