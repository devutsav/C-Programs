/*#include<stdio.h>
#define INFINITY 999
int i,j,k;
int min(int a,int b)
{
	if(a>b) return b;
	else return a;
}
void floyd(int cost[10][10],int n)
{
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{	
				
				if(i==j) {
					cost[i][j]=0;
				}
				else if(i!=j)
				{	
					cost[i][j] = min(cost[i][j],cost[i][k]+cost[k][j]);
				}
			}
		}
	}
}
int main()
{
	int n,e,a,b,c,cost[10][10];
	printf("Enter the no of vertices\n");
	scanf("%d",&n);
	printf("Enter the no of edges\n");
	scanf("%d",&e);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cost[i][j]=INFINITY;
		}
	}
	printf("Enter the starting vertex, ending vertex and corr. edge wt.\n");
	for(i=1;i<=e;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		cost[a][b]=c;
	}
	
	floyd(cost,n);
	for(i=1;i<=n;i++)
	{
  		for(j=1;j<=n;j++)
  		{
   			if(i!=j)
			{
    				printf("(%d -> %d) = %d\n",i,j,cost[i][j]);
			}
  		}

	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d \t",cost[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
*/
#include <stdio.h>
#include<limits.h>
#define INFINITY 999
int i,j,k,p[100][100];
void floyd(int cost[401][401],int n)
{
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{	
				
				if(i!=j){
					if(cost[i][j]>cost[i][k]+cost[k][j])
					{
						cost[i][j]=cost[i][k]+cost[k][j];
						p[i][j]=k;
					}
				}
				else if (i==j)
				{				
					cost[i][j]=0;
				}	
			}
		}
	}
}
int main()
{
	int n,e,a,b,c,x,y,cost[401][401];
	printf("Enter the vertex and edges\n");
	scanf("%d %d",&n,&e);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cost[i][j]=INFINITY;
			p[i][j]=0;
		}
	}
	printf("Enter the vertex and edges\n");
	for(i=1;i<=e;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		cost[a][b]=c;
	}
	printf("\nThe cost matrix is\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d \t",cost[i][j]);
		}
		printf("\n");
	}
	floyd(cost,n);
	printf("\nThe reduced cost matrix is\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d \t",cost[i][j]);
		}
		printf("\n");
	}
	printf("\nThe path matrix is\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d \t",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}
