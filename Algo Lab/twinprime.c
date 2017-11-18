#include<stdio.h>
int main()
{
	int a[100],i,j,n,store[100]={0};
	printf("Enter the range\n");
	scanf("%d",&n);

	int isprime=0;
	int c=0;
	for(i=2;i<=n;i++)
	{
		isprime=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{			
				isprime++;
			}
		
		}
		if(isprime==0)
		{
			store[c]=i;
			c++;
		}
	}
	printf("The twin primes are\n");
	for(i=0;i<c;i++)
	{
		if(store[i] == store[i-1]+2)
		{
			printf("%d %d\n",store[i-1],store[i]);
		}
	}
	return 0;
}
	
