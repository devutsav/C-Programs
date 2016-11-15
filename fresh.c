#include<stdio.h>
#include<limits.h>
void main()
{
	int x[20][20],a[20],b[20],v1=0,v2=0,temp=0,t[20][20];
	int i,j,sum,sum1=0,sum2=0,m,n,small,k,l,row,column,qwe;
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
	small=1000;
	for(qwe=0;qwe<deg;qwe++)
	{
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(x[i][j]<small)
				{
					small=x[i][j];
					//t[i][j]=small;
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
			sum += (x[row][column]*demand);
			temp=supply-demand;
			supply=temp;
			demand=demand-supply;
			for(q=0;q<n;q++)
			{	
				x[q][column]=INT_MAX;
			}
			b[column]=0;
			printf("\nThe sum is: %d\n",sum);
		
		}
		else if(demand>supply)
		{
			sum += (x[row][column]*supply);
			temp=demand-supply;
			demand=temp;
			supply=supply-demand;
			for(q=0;q<m;q++)
			{	
				x[row][q]=INT_MAX;
			}
			a[row]=0;	
			printf("\nThe sum is: %d\n",sum);
			
		}
		else if(demand==supply)
		{
			sum += (x[row][column]*supply);
			temp=demand-supply;
			demand=temp;
			supply=supply-demand;
			/*for(q=0;q<n;q++)
			{	
				x[q][column]=0;
			}
			for(q=0;q<m;q++)
			{	
				x[row][q]=0;
			}*/
			x[row][m]=INT_MAX;
			x[n][column]=INT_MAX;
			a[row]=0;
			b[column]=0;
			printf("\nThe sum is: %d\n",sum);
			break;
		}
		small=70;
			
	}	
	printf("\nThe sum is: %d\n",sum);
}
