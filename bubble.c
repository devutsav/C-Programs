#include<stdio.h>
int main()
{
	int a[100];
	int i,j,n,temp=0;
	printf("Enter the number of elements of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		//printf("Enter arr[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("The sorted list \n");
        for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

