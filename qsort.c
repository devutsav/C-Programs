#include<stdio.h>        //Partition and sorting is done in a single function
#define SWAP(A,B) A=(A+B)-(B=A) 
int i,j,key;
void qsort(int a[],int m,int n)
{
	if(m<n)
	{
		i=m;
		j=n+1;
		key=a[m];
		
		while(1)
		{
			while(a[i]<=key)
			{
				i++;
			}
			while(a[j]>key)
			{
				j--;
			}
			if(i<j)
			{
				SWAP(a[i],a[j]);
			}
			else
				break;
		}
		SWAP(a[m],a[j]);
		qsort(a,m,j-1);
		qsort(a,j+1,n);
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
