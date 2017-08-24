#include <stdio.h>  // [DS practice] Done by Utsav Das 
#include<stdlib.h>
#define max 8
int front=0, rear=-1;
int arr[max];
void insert()
{
	int a;
	printf("Enter a number to insert\n");
	scanf("%d",&a);
	if( front + (max-1) == rear )
	{
		printf("Overflow detected\n");
	}
	if(front==0 && rear==-1)
	{
		rear=rear+1;
		arr[rear]=a;
	}
	else //if(front <= rear)
	{
		rear=rear+1;
		arr[rear]=a;
	}
	for(int i=front;i<=rear;i++){
		printf("%d ",arr[i]);
	}printf("\n");
}
void delete()
{
	if(front > rear)
	{
		printf("Underflow detected\n");
	}
	if(front==0 && rear==-1)
	{
		printf("Underflow detected\n");
	}

	else if(front<=rear)
	{
		
		int a=arr[front];
		arr[front]='\0';
		front=front+1;
	}
	for(int i=front;i<=rear;i++){
		printf("%d ",arr[i]);
	}printf("\n");
}
int main(void) 
{
	int n;
	while(1){
		printf("Enter operation no\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: insert();
				break;
			case 2: delete();
				break;
			case 4: exit(0);
			default: printf("sure?");
			
		}
	}
	
	return 0;
}
