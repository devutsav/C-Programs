#include<stdio.h>
int i,j;
int insertion(int a[],int size)
{
	for(i=1;i<size;i++)
	{
		int temp=a[i];
		j=i-1;
		while(j >= 0 && temp<a[j])
		{	
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
void printArray(int a[],int size)
{
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	int a[]={1,7,-2,20,4,100,5};
	int size=sizeof(a)/sizeof(a[0]);
	insertion(a,size);
	printArray(a,size);
	return 0;
}
