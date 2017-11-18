#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a[]={5,4,7,-8,1,0,44,-6,87,5};
	int n=sizeof(a)/sizeof(a[0]);
	double m = floor((double)n/2);
	printf("%d\n",(int)m);
	int m1=(int)m;
	int arr[m1];
	int i,j,k=0;
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			arr[k]=a[i];
			k++;
		}
	}
	int n1=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n1-1;i++)
	{
		for(j=i;j<n1-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;

}
