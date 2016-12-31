    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
        int test,i,min,count,max;
        long n,m,c;
        scanf("%d",&test);
        while(test--)
        {
            count=0;
            scanf("%ld %ld %ld",&n,&m,&c);
            if(n>m){
                min=m;
               // max=n;
            }else{
                min=n;
                //max=m;
            }
            for(i=1;i<=min;i++)
            {
                if((c%i)==0 && (c/i)<=m)
                {
                    count++;
                }
            }
            printf("%d\n",count);
            count=0;
        }
        return 0;
        
    } 
