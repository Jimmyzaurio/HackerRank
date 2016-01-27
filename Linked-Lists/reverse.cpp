/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
  Node* prev = NULL;
  Node* act  = head;
  Node* sig;
    
  while (act != NULL) {
    sig = act->next;
    act->next = prev;
    prev = act;
    act = sig;
  }
  head = prev;
  return head;
}
