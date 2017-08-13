    #include <stdio.h>
    int main(void) {
 
    	int n;
    	scanf("%d",&n);
    	int a[n],b[n],frequ[n];
    	for(int i=0;i<n;i++)
    	{
    		scanf("%d ",&a[i]);
    		b[i]=0;
    		frequ[i]=-1;
    	}
    	for(int i=0;i<n;i++){
    		    int c=1;
    			for(int j=i+1;j<n;j++){
    				if(a[i]==a[j]){
    					c++;
    					frequ[j]=0;
    				//	a[j]=0;
 
    				}
    			}
 
    			if(frequ[i]!=0){
    		   		frequ[i]=c;
    				}
    			}
 
    	for(int i=0;i<n;i++){
             if(frequ[i]>0){
    		   		b[i] = a[i];
 
    			}
    	}
    	for(int i=0;i<n;i++){
    		for(int j=i+1;j<n;j++){
    			if(frequ[i]<frequ[j]){
    				int temp=b[j];
    				b[j]=b[i];
    				b[i]=temp;
    			}
    		}
    	}
    	for(int i=0;i<3;i++){
    		printf("%d ",b[i]);
    	}
    	return 0;
    }
