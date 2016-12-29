#include <stdio.h>
#include<limits.h>
//#define INFINITY 999
#define INFINITY 0xfffffff
int i,j,k;
void floyd(int cost[401][401],int n)
{
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{	
				
				if(cost[i][j]>cost[i][k]+cost[k][j])
				{
					cost[i][j]=cost[i][k]+cost[k][j];
				}
			}
		}
	}
}
int main()
{
	int n,e,a,b,c,x,y,cost[401][401];
	long int no;
	scanf("%d %d",&n,&e);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cost[i][j]=INFINITY;
		}
	}
	for(i=1;i<=e;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		cost[a][b]=c;
	}
	floyd(cost,n);
	scanf("%ld",&no);
	for(i=1;i<=no;i++)
	{
		scanf("%d %d",&x,&y);
		if(x==y)
		{
                   printf("0\n");
		   continue;
			
		}
	        else if(cost[x][y] == INFINITY) 
	        {
			printf("-1\n");
			continue;
		
		}
		else
		printf("%d\n", cost[x][y]);
	}
	return 0;
}

