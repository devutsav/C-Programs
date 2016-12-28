#include<stdio.h>
#include<limits.h>
int i,j,k;

void merge(int a[],int low,int high,int mid)
{
	int n1,n2;
	n1=mid-low+1;
	n2=high-mid;
	int L[10],R[10];
	for(i=0;i<n1;i++)
	{
		L[i]=a[low+i];
	}
	for(j=0;j<n2;j++)
	{
		R[j]=a[mid+1+j];
	}
	L[n1]=INT_MAX;
	R[n2]=INT_MAX;

	i=0;
	j=0;
	for(k=low;k<=high;k++)
	{
		if(L[i]>=R[j])
		{
			a[k]=R[j];
			j++;
		}
		else
		{
			a[k]=L[i];
			i++;
		}
	}
}
void print(int a[], int low, int high)
{
	printf("Sorted array is\n");
	for(i=low;i<high;i++) 
	{
		printf("%d\n",a[i]);
	}
}
		

void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,high,mid);
	}
}
	

int main()
{
	int n,a[10];
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	mergesort(a,0,n-1);
	print(a,0,n);
	return 0;
}

	
