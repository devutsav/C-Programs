#include <stdlib.h>
#include <stdio.h>

int cost[10][10],i,j,k,n;
int q[10],front,rare,v,visited[10];
 
int main()
{
	int m;
	scanf("%d",&n);
	scanf("%d",&m);
	for(k=1;k<=m;k++)
	{
		scanf("%d %d",&i,&j);
		cost[i][j]=1;
	}
	scanf("%d",&v);
	printf("%d ",v);
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
	}
	visited[v]=1;
	k=1;
	while(k<n)
	{
		for(j=1;j<=n;j++)
		{
			if(cost[v][j]!=0 && visited[j]!=1)
			{
				visited[j]=1;
				q[rare++]=j;
			}
		}
		v=q[front++];
		printf("%d ",v);
		k++;
	}
	return 0;
}
