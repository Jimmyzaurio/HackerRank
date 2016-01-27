/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
  int conta = 0;
  Node* n = new Node;
  Node* nuevo = new Node;
  nuevo->data = data;
  nuevo->next = NULL;
  
  if (head == NULL)    
    head = nuevo;    
  else {
    for (n = head; n; n=n->next, conta++) {
      if (position == 0) {
        nuevo->next = n;
        head = nuevo;
        break;
      } else if (conta == position - 1){
        nuevo->next = n->next;
        n->next = nuevo;
        break;
      }    
    }
  }
  return head;
}
