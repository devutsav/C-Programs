#include<stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int i;
    char arr[100];
   scanf("%s",&arr);
   int c=(int)strlen(arr);
   char as=(char)c;
   for(i=0;i<strlen(arr);i++)
   {
   		if(arr[i]==INT_MAX) return -1;
   		else if(arr[i]-48>arr[as-i]-48){
   				int temp=arr[0];
   				arr[0]=arr[i];
   				arr[i]=temp;
   		}
   }
   printf("%s",arr);
 }

