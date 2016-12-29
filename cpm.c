#include<stdio.h>
#include<limits.h>
#define INFINITY 999

int main()
{
	int i,j,k,a[10][10],e[10],l[10],count,count1,f[10],m,p,w,n,t;
	printf("Enter the no of nodes\n");
	scanf("%d",&n);
	printf("Enter the vert1 vert2 and edge wt\n");
	for(i=0;i<n;i++)
	
		for(j=0;j<n;j++)
			a[i][j]=0;
			while(1)
			{
				scanf("%d%d%d",&j,&k,&w);
				if(j==-1)
				break;
					a[j][k]=w;
				
			}
	
	e[0]=0;
	for(k=1;k<=n;k++)
	{
		count=0;	
		for(i=0;i<n;i++)
		{
			if(a[i][k] != 0)
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
					if(a[i][k] != 0)
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
	//t=0;
	printf("The forward sums are\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",e[i]);
	}

	l[n-1]=e[n-1];
	for(k=n-2;k>=0;k--)
	{
		count1=0;
		for(j=0;j<n;j++)
		{
			if(a[k][j]!=0)
			{
				count1++;
				p=j;
			}
		}
		if(count1==1)
		{
			l[k]=l[p]-a[k][p];
		}
		else
		{
			l[k]=INFINITY;
			for(j=0;j<n;j++)
			{
				if(a[k][j] != 0)
				{
					t=l[j]-a[k][j];
					if(t<l[k])
					{
						l[k]=t;
					}
				}
			}
		}
	}
	printf("The backward sums are\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",l[i]);
	}
	k=0;
	for(i=1;i<=n;i++)
	{
		if(e[i]==l[i])
		{
			f[k++]=i;
		}
	}
	printf("\n");
	printf("The path is : 0 ");
	for(i=0;i<k;i++)
	{
		printf("  -> %d ",f[i]);
	}
	printf("\n");
	return 0;
}
