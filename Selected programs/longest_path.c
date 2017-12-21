#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int x=0;
int a[500];
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;

	return (node); 

}

void calculateLength(struct node* root,int path[],int level)
{
	if(root==NULL) 
		return;

	path[level]=root->data;
	level++;

	if(root->left==NULL && root->right==NULL)
	{
		int i;
		int sum=0;
		for(i=0;i<level;i++)
		{
			sum = sum + path[i];
		}
		a[x]=sum;
		x++;
		
	}
	else
	{
		calculateLength(root->left,path,level);
		calculateLength(root->right,path,level);
	}
	

}
void findLongest(struct node* root)
{
	int path[500];
	calculateLength(root,path,0);
}

int main()
{
	struct node* node=newnode(2);
	node->left=newnode(5);
	node->right=newnode(8);
	node->left->left=newnode(2);
	int i,j;
	findLongest(node);
	for(i=0;i<x;i++)
	{
	     for(j=0;j<x-i+1;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;			
			}		
		}
	}
	printf("%d\n",a[0]);
	return 0;
}
