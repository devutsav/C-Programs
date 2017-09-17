#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
void rearrange(int arr[], int n)
{
    // USER CODE
    int a[n],i,minindex=0,maxindex=0;
    int x=1,m=0;
    while(x<=n)
    {
        
        int max=0;
        int min=999;
        for(i=0;i<n;i++)
        {
           if(arr[i]>max && arr[i]!=0)
           {
              max=arr[i];
              maxindex=i;
           }
           if(arr[i]<min && arr[i]!=0)
           {
              min=arr[i];
              minindex=i;
           }
        }
        
        if(x%2 !=0)    
        {
            a[m]=max;
            arr[maxindex]=0;
            m++;
        }
        else if(x%2==0){
            a[m]=min;
            m++;
            arr[minindex]=0;
           }
       x++;
     }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

//Dont alter main program
int main(int argc, char *argv[])
{
    
    int n = atoi(argv[1]);
    int arr[n], i;
    for(i=0;i<n;i++)
        arr[i]=atoi(argv[i+2]);
    rearrange(arr, n);
    return 0;
}
