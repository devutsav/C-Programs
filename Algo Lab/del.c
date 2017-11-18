#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,m,tmp;
	char a[1000],str[1000];
	printf("Enter the string\n");
	fgets(a,100,stdin);
	i=0;
        j=0;
	for(m=0;j<strlen(a);m++)
	{
		if(a[i]==' ')
		{
			tmp = i+1;
			if(a[tmp]!='\0')
			{
				while(a[tmp]==' ')
				{
					
					   i++;
					   tmp++;
					
				}
		
				if(a[tmp]==',' || a[tmp]=='.')
				{
					i++;
				}
				
			}
		}
			
		if(a[i]=='.')
		{
			str[j]=a[i];
			j++;
			break;
		}
			
		str[j]=a[i];
		i++;
		j++;
	}
	str[j]='\0';
	printf("%s\n",str);
	return 0;
}
