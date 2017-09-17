#include <stdio.h>

int main()
{
	 int i,j,k,n;
	 scanf("%d",&n);

	 int coef=1;
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n-i;j++)  //spaces
	 	{
	 		printf(" ");
	 	}
	 	for(j=0;j<=i;j++)   // digits
	 	{
	 		if(i==0 || j==0)
	 		{
	 			coef=1;
	 		}
	 		else coef = coef*(i-j+1)/j;

	 		printf("%d ",coef);
	 	}
	 	printf("\n");

	 }

}
