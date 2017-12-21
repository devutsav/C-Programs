#include <stdio.h>  /*practising tsp */
int cost=0;
int v=4;
int visited[4];
int a[4][4];
int i,j,n;
int initial=0;
int min2(int c)
{
	visited[c]=1;
	int ncity = findpath(c);
	if(ncity==999)
	{

		cost += a[c][initial];
		return;
	}
	min2(ncity);
}
int findpath(int city)
{
	int min=999;
	int newcity=999,kmin;
	for(i=0;i<v;i++)
	{
		if(a[city][i]!=0 && visited[i]==0 && a[city][i]<min)
		{
			min = a[city][i];
			kmin=a[city][i];
			newcity=i;
		}
			
	}
	if (min!=999)
		cost += kmin;
	return newcity;

}
int main()
{
	
	for(i=0;i<4;i++)
	{
		printf("row %d\n",i+1);
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
		
                visited[i]=0;
	}
	
	min2(0);
	printf("%d\n",cost);
	return 0;



}
