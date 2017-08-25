#include <stdio.h>   // TLE :(
#include <string.h>
#include <stdlib.h>
#define MAX(x,y) (x>y)?x:y 

int lcs(char s1[],char s2[],int m, int n)
{
	int L[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		L[i][0]=0;
	}
	for(int j=0;j<=n;j++)
	{
		L[0][j]=0;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				L[i][j] = 1 + L[i-1][j-1];
			}
			else{
				L[i][j] = MAX(L[i-1][j],L[i][j-1]);
			}
		}
	}	
	return L[m][n];
}
int main()
{
	//char s1[]="ababcaax";
	//char s2[]="abbccx";
	char s1[5001],s2[50001];
	gets(s1);
	gets(s2);

	int m=strlen(s1);
	int n=strlen(s2);

	int count = lcs(s1,s2,m,n);
	printf("Longest common subsequence is %d\n",count);
	return 0;
}

