#include <stdio.h>
#include <string.h>
int i,j;
void computepls(char txt[], char pat[], int size1, int size2, int lps[])
{
	int len=0;
	i=1;
	lps[0]=0;
	while(i<size2)
	{
		if(pat[i]==pat[len])
		{
			len++;
			lps[i]=i;
			i++;

		}
		else
		{
			if(len==0)
			{
				lps[i]=0;
				i++;
			}
			else
			{
				len=lps[len-1];
			}
		}
	}
}
void kmp(char txt[], char pat[])
{
	int size1=strlen(txt);
	int size2=strlen(pat);
	int lps[size2];
	computepls(txt, pat, size1, size2, lps);

	while(i<size1)
	{
		if(txt[i]==pat[j])
		{
			i++;
			j++;
		}
		if(j==size2)
		{
			printf("Matched at %d th position\n",(i-j+1));
			j=lps[j-1];

		}
		else if(i<size1 && txt[i]!=pat[j])
		{
			if(j==0)
			{
				i++;
			}
			else
			{
				j=lps[j-1];
			}
		}
	}

}
int main()
{
	char str1[]="Youareawesome";
	char str2[]="awe";
	kmp(str1, str2);
	return 0;
}
