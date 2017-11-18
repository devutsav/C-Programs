#include<stdio.h>   //Done by Utsav Das
int main()
{
	int i,j,n;
	float wt[10],val[10],den[10],x[10],ans=0.0,W,temp,temp1,temp2;  //x[] is used to store the fraction taken
	printf("Enter the maximum capacity of the knapsack\n");
	scanf("%f",&W);
	printf("Enter the no of values\n");
	scanf("%d",&n);
	printf("Enter the values\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&val[i]);
	}
	printf("Enter the corresponding weights\n"); 
	for(i=0;i<n;i++)
	{
		scanf("%f",&wt[i]);
	}
	for(i=0;i<n;i++)
	{
		den[i]=((val[i])/(wt[i]));
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(den[j+1]>den[j])
			{
				temp=val[j+1];
				val[j+1]=val[j];
				val[j]=temp;
			
				temp1=wt[j+1];
				wt[j+1]=wt[j];
				wt[j]=temp1;

				temp2=den[j+1];
				den[j+1]=den[j];
				den[j]=temp2;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		x[i]=0.0;
	}
	float u= W;
	for(i=0;i<n;i++)
	{
		if(wt[i]>u)
		{
			break;
		}
		else
		{
			x[i]=1.0;
			u=u-wt[i];
		}
	}
	if(i<n)
	{
		x[i]=u/wt[i];
	}
	/*printf("\nSorted order of densities:\n");
	for(i=0;i<n;i++)
	{
		printf("%f ",den[i]);
	}*/
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%f ",x[i]);
	}
	for(i=0;i<n;i++)
	{
		 ans = ans + ((x[i])*(val[i]));
	}
	printf("\n%f\n",ans);
        return 0;
}
	
