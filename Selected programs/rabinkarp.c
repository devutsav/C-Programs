#include <stdio.h>
#include <string.h>
#define d 20   //no of characters in input alphabet

void search(char txt[], char pat[], int q)
{
	int i,j;
	int size1=strlen(txt);
	int size2=strlen(pat);
	int t=0;   //hash value for txt
	int p=0;  //hash value for pattern
	int h=1;

	for(i=0;i<size2-1;i++)
	{
		h=(h*d)%q;
	}
	for(i=0;i<size2;i++)   // calc hash values
	{
		p=(p*d + pat[i])%q;
		t=(d*t + txt[i])%q;

	}
	for(i=0;i<=size1-size2;i++)
	{
		if(p==t)  // starting index of window matches
		{
			for(j=0;j<size2-1;j++)
			{
				if(txt[i+j]!=pat[j])
					break;
			}
			if(j==size2-1)
			{
				printf("Substring exists at %d\n",i);
			}
		}
		if(i<size1-size2)  //if not the last window, slide the window
		{
			t=( d* (t-txt[i]*h) + txt[i+size2] )%q;
			if(t<0)
			{
				t=(t+q);
			}
		}
	}

}


int main()
{
	char txt[]="Youareawesome";
	char pat[]="awe";
	int q=101;
	search(txt, pat, q);
	return 0;
}
