#include<stdio.h>
#include<stdbool.h>
#define V 5
int path[V];
int pos,i,j,v;
bool isSafe(bool graph[V][V],int v,int path[],int pos)
{
	if(graph[path[pos-1]][v]==0)
		return false;

	for(i=0;i<pos;i++)
		if(path[i]==v)
			return false

	return true;
}
bool findHamiltonian(bool graph[V][V],int path[], int pos)
{
	if(pos==V)
	{
	     if(graph[path[pos-1]][path[0]]==1)
		return true;
		else return false;
	}

	for(v=1;v<V;v++)
	{
	    if(isSafe(graph,v,path,pos))
	    {
		path[pos]=v;
	     }		
	     if(findHamiltonian(graph,path,pos+1)==true)
	 	return true;
	     
		path[pos]=-1;
	}
	return false;
}
bool hamcycle(bool graph[V][V])
{
	for(i=0;i<V;i++)
	{
		path[i]=-1;			
	}
	path[0]=0;
	if(findHamiltonian(graph, path, 1)==false)
		return false;	

	for(i=0;i<V;i++)
	{
		printf("%d ",path[i]);	
	}
	printf("%d \n",path[0]);	
	return true;

}
int main()
{
	bool graph[V][V] = {{0, 1, 0, 1, 0},
                      {1, 0, 1, 1, 1},
                      {0, 1, 0, 0, 1},
                      {1, 1, 0, 0, 1},
                      {0, 1, 1, 1, 0},
                     };
       int n = V;
 
    hamcycle(graph);
	return 0;
}
