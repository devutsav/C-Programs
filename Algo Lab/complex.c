#include<stdio.h>

typedef struct complex
{
	int real;
	int imag;
}compl;
 
int main()
{
	compl c1,c2,cx;
	printf("Enter the first complex no\n");
	scanf("%d %d",&c1.real,&c1.imag);
	printf("Enter the second complex no\n");
	scanf("%d %d",&c2.real,&c2.imag);
	

	cx.real = c1.real + c2.real;
	cx.imag = c1.imag + c2.imag;
	printf("%d + %d i\n",cx.real,cx.imag);
	return 0;
	
}

	
