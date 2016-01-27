/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
  Node* n = new Node;
  int conta = 0; 
  for (n = head; n; n=n->next, conta++) {
    if (position == 0) {
      Node* aux = n->next;
      head = aux;
      break;
    } else if(conta == position - 1) {
      Node* aux = n->next->next;
      n->next = aux;
      break;
    }
  }
  return head;
}
