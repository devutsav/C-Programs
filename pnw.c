#include<stdio.h>
int main()
{
	int i,j,n,m,a[10][10],dem[10],sp[10],sum=0;
	printf("Enter the no of rows\n");
	scanf("%d",&n);
	printf("Enter the no of columns\n");
	scanf("%d",&m);
	printf("Enter the cost matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the supply\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&sp[i]);
	}
	printf("Enter the demands\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&dem[i]);
	}
  i=0;
	j=0;
	while(i<n && j<m)
	{
		if(dem[j]<sp[i])
		{
			sum=sum+(a[i][j]*dem[j]);
			sp[i]=sp[i]-dem[j];
			j++;
		}
		else if(dem[j]>sp[i])
		{
			sum=sum+(a[i][j]*sp[i]);
			dem[j]=dem[j]-sp[i];
			i++;
		}
		else if(dem[j]==sp[i])
		{
			sum=sum+(a[i][j]*dem[j]);
			sp[i]=sp[i]-sp[i];
			dem[j]=dem[j]-dem[j];
			i++;
			j++;
		}
	}
	printf("The total sum is %d\n",sum);
	return 0;
}
