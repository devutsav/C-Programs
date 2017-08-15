     // Reversing words in a sentence
     #include <stdio.h>
        #include<string.h>
        #include<stdlib.h>
     
        int main(void) {
     
        	int n;
        	char str[50],new[50];
        	gets(str);
            int j = strlen(str)-1;
            int i=0,k;
            while(j>=i)
            {
            	char temp = str[j];
            	str[j]=str[i];
            	str[i]=temp;
            	j--;
            	i++;
            }
            int m=0;
            int l=0;
            for(i=0;str[i]!='\0';i++)
            {
     
            	if(str[i+1]==' '||str[i+1]=='\0')
            	{
            		    //m=i-1;
            		    k=i;
            		    while(k>=l)
            		    {
     
            				new[m]=str[k];
            				k--;
            				m++;
            			}
            			l=m;
            			new[m]=' ';
            		//k=0;
            	}
           }
           for(int i=0;i<strlen(new);i++)
           {
           	printf("%c",new[i]);
           }
           return 0;
    }
