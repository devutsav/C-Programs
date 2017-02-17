/*          //Linked List (Hackerrank)
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int val)
{
  // Complete this method
       Node *ptr, *preptr, *temp;
       temp=(Node *)malloc(sizeof(Node));
       temp -> data = val;
       ptr = head;
        if(ptr == NULL)
        {
                head  = temp;     
        }
        else
        {
                while(ptr -> next != NULL)
                {
                        // preptr=ptr;
                        ptr=ptr -> next;
                }
                ptr -> next = temp;
        }
        temp -> next = NULL;
        return head;
}
