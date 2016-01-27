/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node* nuevo = new Node;    
    
    nuevo->data = data;
    nuevo->next = NULL;
    
    if (head == NULL)
        head = nuevo;
    else {
        Node* last = head;
        while (last->next != NULL)
            last = last->next;    
        last->next = nuevo;
    }
    return head;        
}
