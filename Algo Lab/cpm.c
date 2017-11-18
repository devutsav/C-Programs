#include<stdio.h>
#define INFINITY 999

int main()
{
	int i,j,k,a[10][10],e[10],l[10],count,count1,arr[10],m,p,w,edge,n,t,t1;
	printf("Enter the no of nodes\n");
	scanf("%d",&n);
	printf("Enter the no of edges\n");
	scanf("%d",&edge);
	printf("Enter the vert1 vert2 and edge wt\n");
        for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	
	for(i=0;i<edge;i++)
	{
		scanf("%d%d%d",&j,&k,&w);
		a[j][k]=w;
	}
	e[0]=0;
	for(k=0;k<n;k++)
	{
		count=0;
		for(i=0;i<n;i++)
		{
			if(a[i][k]!=0)
			{
				count++;
				m=i;
			}
		}
		if(count==1)
		{
			e[k]=e[m]+a[m][k];
		}
		else
		{	
			e[k]=0;	
			for(i=0;i<n;i++)
			{
				if(a[i][k]!=0)
				{
					t=e[i]+a[i][k];
					if(t>e[k])
					{
						e[k]=t;
					}
				}
			}
		}
	}				
	printf("The forward sums are\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",e[i]);
	}
        int m1;
	l[n-1]=e[n-1];
	for(k=n-2;k>=0;k--)
	{
		count1=0;
		for(i=0;i<n;i++)
		{
			if(a[k][i]!=0)
			{
				count1++;
				m1=i;
			}
		}
		if(count==1)
		{
			l[k]=l[m1]-a[k][m1];
		}
		else
		{	
			l[k]=INFINITY;	
			for(i=0;i<n;i++)
			{
				if(a[k][i]!=0)
				{
					t1=l[i]-a[k][i];
					if(t1<l[k])
					{
						l[k]=t1;
					}
				}
			}
		}
	}				
	printf("\nThe backward sums are\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",l[i]);
	}
	k=0;
	for(i=0;i<n;i++)
	{
		if(e[i]==l[i])
		{	
			arr[k++]=i;
		}
	}
	printf("\n");
	for(i=0;i<k;i++)
	{
		printf(" -> %d ",arr[i]);
	}			
	printf("\n");
	return 0;
}			
