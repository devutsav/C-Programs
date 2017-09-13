#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void test(char* str)
{
	int size=strlen(str);
	bool lcs[size][size];

	int i,j,k,start=0,maxlength=1;
  bzero(lcs,sizeof(lcs));
	for(i=0;i<size;i++)
	{
		lcs[i][i]=true;
	}

	for(i=0;i<size;i++)
	{
		if(str[i]==str[i+1])
		{
			lcs[i][i+1]=true;
			maxlength=2;
			start=i;
		}
	}

	for(k=3;k<=size;k++)
	{
		for(i=0;i<=size-k+1;i++)
		{
			j=i+k-1;
			if(lcs[i+1][j-1] && str[i]==str[j])
			{
				lcs[i][j]=true;
				if(k>maxlength)
				{
					start=i;
					maxlength=k;
				}
			}
		}
	}
	//printf("%d %d",start,maxlength);
	for(i=start;i<=start+maxlength-1;i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

}

int main()
{

	char str[]="AABBA";
	test(str);
	return 0;
}
