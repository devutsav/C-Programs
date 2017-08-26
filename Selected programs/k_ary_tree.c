//Find the number of leaf nodes in a full k-ary tree of height m.

#include <stdio.h>
#include<math.h>

int nodes(int k,int m)
{
    long long int under_mod=1000000007;
    long long int ans=1;
    for(int i=1;i<=m;i++)
    {
      ans=k*ans;
      ans=ans % under_mod;
    }
    return ans;
}
int main() {
	int t,k,m;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&k,&m);
	    int a=nodes(k,m);
	    printf("%d\n",a);
	}
	

	return 0;
}
