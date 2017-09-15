#include <stdio.h>
#define swap(a,b) a=(a+b)-(b=a)
int main()
{
	int i,j,k;
	float W;
	int n;
	scanf("%d",&n);
	float val[n],wt[n];
	float x[n],den[n];
	printf("Values\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&val[i]);
	}
	printf("Weights\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&wt[i]);
	}
	for(i=0;i<n;i++)
	{
		x[i]=0.0;
	}
	printf("Max Wt W\n");
	scanf("%f",&W);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		den[i]=(val[i]/wt[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(den[j+1]<den[j])
			{
				swap(val[j],val[j+1]);
				swap(wt[j],wt[j+1]);
			}
		}
	}
	float u = W;
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
		x[i] = u/wt[i];
	}
	float ans = 0.0;
	for(i=0;i<n;i++)
	{
		ans = ans + ((x[i])*(val[i]));
	}
	printf("%f\n",ans);

	return 0;
}
