#include <stdio.h>
#include <string.h>
void match(char a[], char b[])
{
	int size1=strlen(a);
	int size2=strlen(b);
	int i,j;
	for(i=0;i<=size1-size2;i++)
	{
		for(j=0;j<size2;j++)
		{
			if(a[i+j]!=b[j])
				break;
		}
		if(j==size2) printf("Matched at %d th index",i+1);
	}
}
int main()
{
	char a[]="FirstString";
	char b[]="String";
	match(a,b);
	return 0;
}
