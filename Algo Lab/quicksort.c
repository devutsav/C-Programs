#include<stdio.h>
int i,j;
int partition(int A[],int p,int r)
{
	int x=A[r];
	i=p-1;
	for(j=p;j<r;j++)
	{
		if(A[j] <= x)
		{
			i=i+1;
			
			int temp=A[j];
			A[j]=A[i];
			A[i]=temp;
			
		}
	}
	int temp1=A[r];
	A[r]=A[i+1];
	A[i+1]=temp1;
	
	return i+1;
}

int qsort(int A[],int p,int r)
{
	int g;
	if(p<r)
	{
		g=partition(A,p,r);
		qsort(A,p,g-1);
		qsort(A,g+1,r);
	}
}
int main()
{
	int A[10],n;
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\n");
	qsort(A,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	return 0;
	
	
}
