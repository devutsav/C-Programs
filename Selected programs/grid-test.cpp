#include <cstdio>    
#include <cstring>
#include <string>
#include <cstdlib>
#include <iostream>
#include <algorithm>  
#include<locale>
using namespace std;


int main() 
{
        int test;
	      char a[101][101],temp[50],c;
	      int i,j,n;
        scanf("%d",&test);
        while(test--)
        {
                     
          scanf("%d",&n);
		      for(i=0;i<n;i++)
		      {
                 scanf("%s",a[i]);
		      }
               /*for(i=0;i<n;i++)
	              {
			                  c = a[i];
                       if (isupper(c)){
                               cout << "NO" <<endl;
                               break;
                       }
		
		            }*/
		      for(i=0;i<n;i++)
	       {
			        sort(a[i],a[i]+n);
		
		      }
          bool flag=true;
		      for(j=0;j<n;j++)
		      {
			        for(i=0;i<n-1;i++)    ///
			        {
                      if(a[i][j]>a[i+1][j])
                      {
                             flag=false;
                      }
			        }
		      }
                
           if (flag) printf("YES\n");
           else  printf("NO\n");

          }
         return 0;
           
}
