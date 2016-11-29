#include<stdio.h>
#include<limits.h>
void main()
{
	int x[20][20],a[20],b[20],v1=0,v2=0,temp;
	int i,j,sum=0,sum1=0,sum2=0,m,n,small=INT_MAX,k,l,row,column,qwe;
	printf("Enter the no of rows\n");
	scanf("%d",&n);
	printf("Enter the no of columns\n");
	scanf("%d",&m);
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("The cost-matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	printf("Enter the demands\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		sum1=sum1+b[i];
	}
	printf("Enter the supply\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum2=sum2+a[i];
	}
	if(sum1!=sum2)
	{
		printf("Non-balanced\n");
	}
	i=0;
	j=0;
	int deg=m+n-1,q;
	for(qwe=1;qwe<=(deg);qwe++)
	{
		small=INT_MAX;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(x[i][j]<small)
				{
					small=x[i][j];
					row=i;
					column=j; 
				}
			}
		}
		printf("\nThe smallest : %d\n",small);	
		int supply=a[row]; //--b
		int demand=b[column];  // \\a
		if (supply>demand)
		{
			sum = sum + ((x[row][column])*demand);
			printf("Current sum is: %d\n",sum);
			a[row]=supply-demand;
			demand=0;
			for(q=0;q<n;q++)
			{	
				x[q][column]=INT_MAX;
			}
		}
		else if(demand>supply)
		{
			sum = sum + ((x[row][column])*supply);
			printf("Current sum is: %d\n",sum);
			b[column]=demand-supply;
			supply=0;
			for(q=0;q<m;q++)
			{	
				x[row][q]=INT_MAX;
			}	
			
		}
		else
		{
			sum = sum + ((x[row][column])*supply);
			printf("Current sum is: %d\n",sum);
			b[column]=0;
			a[row]=0;
			x[row][m]=INT_MAX;
			x[n][column]=INT_MAX;
			break;
		}
	}	
	printf("\nThe total sum is: %d\n",sum);
}
