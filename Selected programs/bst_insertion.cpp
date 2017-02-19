/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
   if(root==NULL)
           {
           root = (node *)malloc(sizeof(node));
           root->data=value;
           root->left=NULL;
           root->right=NULL;
           return root;
   }
    else if(value < root->data)
            {
            root->left=insert(root->left,value);
    }
    else if(value > root->data)
            {
            root->right=insert(root->right,value);
    }
   return root;
}
