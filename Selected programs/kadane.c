#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
int compute(int a[], int size)
{
    int max=INT_MIN;
    int sum=0,i;
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
        if(sum>max)
        {
            max=sum;
        }
        if(a[i]<0)
        {
            sum=0;
        }
        
    }
    return max;
    
}
int main() {
	int a[]={2,4,-9,7,10};
	int size = sizeof(a)/sizeof(a[0]);
	printf("%d",compute(a,size));
	return 0;
}
