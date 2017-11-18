#include<stdio.h>
int main()
{
	int i,j,m,n;
	int a[10][10],X[10][1],c[10],b[10][1],btr[1][10],atr[10][10],V[10];
	printf("Enter the value of m\n");
	scanf("%d",&m);
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the matrix a :\n"); 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The coefficient matrix a: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the coefficients of b :\n"); 
	for(i=0;i<n;i++)
	{
		for(j=0;j<1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The constant matrix b: \n"); 
	for(i=0;i<n;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("%d ",b[i][j]);
			printf("\n");
		}
	}
	printf("Enter the coefficients of Min. z \n"); 
	for(i=0;i<n;i++)
	{ 
		
		scanf("%d",&c[i]);
	}
	printf("The coefficient matrix of the primal solution :\n");
	for(i=0;i<n;i++)
	{ 
		printf("%d ",c[i]);

	}
	printf("\n");
	//Transpose of A
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			atr[i][j]=a[j][i];
		}
	}
	//B Transpose
	for(i=0;i<1;i++)
	{
		for(j=0;j<n;j++)
		{
			btr[i][j]=b[j][i];
		}
	}
	printf("\n******************************\nDUALITY PROBLEM\n");
	printf("\n******************************\nPrimal solution:\n");
	printf("Min. z = ");
	for(i=0;i<n;i++)
	{
		printf("%dx%d",c[i],i+1);
		if(i!=n-1 && c[i+1]>=0)
		{
		   printf(" + ");
		}
		else if(i!=n-1 && c[i+1]<0)
		{
			printf(" ");
		}
	}
	printf("\nSub. to :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%dx%d",a[i][j],j+1);
			if(j!=n-1 && a[i][j+1]>=0)
			{
		   		printf(" + ");
			}
			else if(j!=n-1 && a[i][j+1]<0)
			{
		   		printf(" ");
			}
			
		}
		printf(" >= %d ",b[i][0]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		printf("x%d >=0",i+1);
		if(i!=n-1)
		{
			printf(" , ");
		}
	}
	printf("\n******************************\nDual solution:\n");
	printf("Min. w = ");
	for(i=0;i<n;i++)
	{
		printf("%dv%d",btr[0][i],i+1);
		if(i!=n-1 && btr[0][i+1]>=0)
		{
		   printf(" + ");
		}
		else if(i!=n-1 && btr[0][i+1]<0)
		{
		   printf(" ");
		}
		
	}
	printf("\nSub. to :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%dv%d",atr[i][j],j+1);
			if(j!=m-1 && atr[i][j+1]>=0)
			{
		   		printf(" + ");
			}
			else if(j!=m-1 && atr[i][j+1]<0)
			{
		   		printf(" ");
			}
			
		}
		printf(" >= %d ",c[i]);
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		printf("v%d >=0",i+1);
		if(i!=m-1)
		{
			printf(" , ");
		}
	}
	printf("\n");
	return 0;	
}
