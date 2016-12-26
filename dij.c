#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
#define n 5
int i;
int mindistance(int dist[],bool ifvisited[])
{
	int m=INT_MAX;
	int min_index=0;
	for(i=0;i<n;i++)
	{
		if(dist[i]<m && ifvisited[i]==false)
		{
			m=dist[i];
			min_index=i;
		}
	}
	return min_index;
}
				

void dijkstra(int a[n][n],int src)
{
	int dist[n],x,v;
	bool ifvisited[n];
	for(i=0;i<n;i++)
	{
		dist[i]=INT_MAX;
		ifvisited[i]=false;
	}
	dist[src]=0;
	for(int u=0;u<n-1;u++)
	{
		x=mindistance(dist,ifvisited);
		ifvisited[x]=true;
		for(v=0;v<n;v++)
		{
			if(dist[v]>dist[x]+a[x][v] && !ifvisited[v] && a[x][v])
			{
				dist[v]=dist[x]+a[x][v];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf(" 0 -> %d = %d\n",i+1,dist[i]);
	}
}
			
			
int main()
{
	
	int a[n][n] = {{0, 100, 20, 0, 0},
                          {100, 0, 20, 15, 0},
                          {20, 20, 0, 10, 60},
                          {0, 15, 10, 0, 50},
                          {0, 0, 60, 50, 0},
                        };
   dijkstra(a,0);
	return 0;
}
