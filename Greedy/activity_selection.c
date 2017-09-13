#include <stdio.h>  /** @author **/
#include <string.h>
#include <stdlib.h>

void activity(int s[], int f[], int n)  // Activity selection problem
{
	
	int i,j;
	i=0;
	printf("%d ",i);

		for(j=1;j<=n;j++)
		{
			if(f[i]<=s[j])  // start after finish of i but end before start of j
			{
				printf("%d ",j);
				i=j;
			}
		}
}
int main()
{
	int s[]={1,3,0,5,8,5};
	int f[]={2,4,6,7,9,10}; 
	int n=sizeof(s)/sizeof(s[0]);
	activity(s,f, n);
	return 0;
}
