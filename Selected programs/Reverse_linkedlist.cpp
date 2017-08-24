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
/*Node* Reverse(Node *head)
{
  // Complete this method
   Node *t1, *t2, *t3;
   t1=NULL;
   while(head != NULL)
   {
       t2=head->next;
       head->next=t1;
       t1=head;
       head=t2;
           
   }
   return t1;
}*/
Node* Reverse(Node *head)
{
  // Complete this method
    Node* current, *nxt, *prev;
    if (head == NULL) {
        return NULL;
    }
    
    if (head->next == NULL) {
        return head;
    }
    current = head;
    prev=NULL;
    while(current->next != NULL)
    {
        nxt = current->next;
        current->next = prev;
        prev = current;
        current = nxt;
    }
    nxt = current->next;
    current->next = prev;
    prev = current;
    head = prev;
    return head;
    
}
