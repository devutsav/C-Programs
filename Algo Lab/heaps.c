#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//double size=6;
int i;
void max_heapify(int a[],int i,int size)  //i signifies the root
{
	int l=2*i;
	int r=(2*i)+1;
	int largest;
	if(l<=size && a[l]>a[i])
	{
		largest=l;
	}
	else{
		largest=i;
	}
	if(r<=size && a[r]>a[largest])
	{
		largest=r;
	}
	if(i!=largest)
	{
		int temp1=a[i];
		a[i]=a[largest];
		a[largest]=temp1;
		
		max_heapify(a,largest,size);
	}
}
void buildheap(int a[],int size)
{
	for(i=(size/2);i>=0;i--)
	{
		max_heapify(a,i,size);
	}
}
		
void heapsort(int a[],int size)
{
	int temp;
	buildheap(a,size);
	for(i=size;i>0;i--)
	{
		temp=a[i];
		a[i]=a[0];
		a[0]=temp;
	
		size=size-1;
		max_heapify(a,0,size);
	}
}
		
int main()
{
	int a[]={2,8,87,3,17,12};
	int size=sizeof(a)/sizeof(a[0]);
	heapsort(a,size-1);
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
        printf("\n");
	return 0;
}
		
