#include <stdio.h>    // Recursion
#include <string.h>
#define max(a,b) a>b?a:b
int lcs(char str1[],char str2[],int len1, int len2)
{

	if(len1==0 || len2==0) return 0;

	if(str1[len1-1]==str2[len2-1])
	{
		return 1+lcs(str1,str2,len1-1,len2-1);	
	}
	else 
		return 1+max(lcs(str1,str2,len1-1,len2),lcs(str1,str2,len1,len2-1));
}

int main()
{

	int i,j,k,n;
	char str1[]="Utsav";
	char str2[]="z";

	int len1=strlen(str1);
	int len2=strlen(str2);

	printf("%d",lcs(str1,str2,len1,len2));
	return 0;
}
