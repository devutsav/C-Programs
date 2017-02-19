/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/


void postOrder(node *node) {
      if(node==NULL)
              {
              return;
      }
      postOrder(node->left);
      postOrder(node->right);
      printf("%d ",node->data);
}
