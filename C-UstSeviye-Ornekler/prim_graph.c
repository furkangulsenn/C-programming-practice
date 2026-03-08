#include <stdio.h>
#include <limits.h>

#define V 5


int graph[V][V] = {
	
    {0,2,0,6,0},
    {2,0,3,8,5},
    {0,3,0,0,7},
    {6,8,0,0,9},
    {0,5,7,9,0}
};

int minKey(int key[], int mstSet[]){
	
    int min = INT_MAX, min_index;
    int v;
    
    for(v=0; v<V; v++)
        if(!mstSet[v] && key[v]<min) min=key[v],min_index=v;
        
        
    return min_index;
}

int main(){
	
    int parent[V], key[V], mstSet[V]={0};
    int i,count,v;
    
    for(i=0;i<V;i++) 
    
		key[i]=INT_MAX;
		
    key[0]=0; 
	parent[0]=-1;

    for(count=0; count<V-1; count++){
    	
        int u=minKey(key,mstSet);
        
        mstSet[u]=1;
        
        for(v=0; v<V; v++)
            if(graph[u][v] && !mstSet[v] && graph[u][v]<key[v])
            
                key[v]=graph[u][v], parent[v]=u;
    }

    printf("Prim MST Edges: ");
    
    for(i=1;i<V;i++) 
		printf("(%d-%d) ",parent[i],i);
	
    printf("\n");
    
    
    return 0;
}
