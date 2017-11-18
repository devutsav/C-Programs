#include <stdio.h>

int main()
{
	
 	char filename[100];
 	char ch;
 	int line=0, word=0, charc=0;

	FILE *fp;
  	printf("Enter a filename :");
  	gets(filename);

   	fp = fopen(filename,"r");

   	if(!fp)
   	{
		printf("Sorry...Failed to open the file\n");
	  
    	}
   	else
   	{
         
	 	while ((ch=getc(fp)) != EOF) 
	   	{
	   	  
		    	if (ch != ' ' && ch != '\n')
		    	{
			 	 charc++; 
		    	}
		  
		   	if (ch == ' ' || ch == '\n') 
		   	{	 
			         word++; 
		   	}
		
		   	if (ch == '\n') 
	           	{
			 	line++; 
		   	}
	   	}
   	}
     	printf("Lines : %d \n", line);
    	printf("Words : %d \n", word);
    	printf("Characters : %d \n", charc);

	return 0;
}


