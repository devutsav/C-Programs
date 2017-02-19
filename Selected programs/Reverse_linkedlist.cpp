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
}
