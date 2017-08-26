#include <stdio.h>
#define MAX(a,b) ((a>b)?a:b)
#define W 50

int knaps(int W,int wt[], int val[], int n)   // O(nW) instead of O(2^n)
{
	int arr[n+1][W+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if(i==0||j==0)
			{
				arr[i][j]=0;
			}
			else if(wt[i]>j)
			{
				arr[i][j]=arr[i-1][j];
			}
			else 
				arr[i][j]= MAX(arr[i-1][j],val[i]+arr[i-1][W-wt[i]]);
		}
	}
	return arr[n][W];
}
int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knaps(W, wt, val, n));
    return 0;
}
