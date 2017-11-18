#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,j,k,count=0,c=0,cop=0;
	char str[100], sub[100],new[100];
	printf("Enter the string\n");
	fgets(str,50,stdin);
	printf("Enter the substring to be checked\n");
	fgets(sub,5,stdin);
 	i=0;
	j=0;
	while(str[i]!='\0')
	{
		while(str[i]==sub[j] && sub[j]!='\0')
		{
			j++;
		}
		i++;
	}
	if(sub[j]=='\0')
	{
		printf("==Substring present==\n");
	        count += 1;
	}
	else
	{
		printf("Substring not present\n");
	}
        i=0;
	if(count!=0)
	{
		while(str[i]!='\0')
		{
			k=i,j=0;
			while(str[k]==sub[j] && sub[j]!='\0')
			{
				k++;
				j++;
			}
			if(sub[j]=='\0')
                 	{
                        	cop=k;
                 	}
			new[c]=str[cop];
			i++;
			cop++;
			c++;
		}
		new[c]='\0';
		printf("\nThe original string is reduced to: %s\n",new);
	}
	return 0;
		
}

