#include<stdio.h>
int main()
{
	int arr[100];
	int i,j,min=0,n;
	printf("Enter the number of elements of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		//printf("Enter arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			min=i;
			if(arr[i]>arr[j])
			{
				min=j;
			}
			if(min!=i)
			{
				int temp=arr[min];
				arr[min]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("The sorted list \n");
        for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

