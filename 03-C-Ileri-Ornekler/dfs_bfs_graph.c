#include <stdio.h>

#define MAX 5

int adj[MAX][MAX] = {
	
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,1},
    {0,1,1,0,1},
    {0,0,1,1,0}
};

int visited[MAX];

void dfs(int v){
	
	int i;
	
    visited[v]=1;
    printf("%d ",v);
    
    for(i=0;i<MAX;i++)
        if(adj[v][i] && !visited[i]) dfs(i);
}

int main(){
	
	int i;
	
    for(i=0;i<MAX;i++) 
		visited[i]=0;
		
    printf("DFS gezintisi: ");
    dfs(0);
    printf("\n");
    
    
    return 0;
}
