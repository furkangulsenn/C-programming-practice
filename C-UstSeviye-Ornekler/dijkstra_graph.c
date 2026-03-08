#include <stdio.h>
#include <limits.h>



int minDistance(int dist[], int sptSet[]){
	
	int v;
    int min = INT_MAX, min_index;
    
    for(v=0; v<V; v++)
        if(!sptSet[v] && dist[v]<=min) min = dist[v], min_index=v;
        
        
    return min_index;
}

void dijkstra(int graph[V][V], int src){
	
	int i,count,v;
    int dist[V], sptSet[V]={0};
    
    for(i=0;i<V;i++) dist[i]=INT_MAX;
    dist[src]=0;

    for(count=0; count<V-1; count++){
    	
        int u = minDistance(dist,sptSet);
        
        sptSet[u]=1;
        
        for(v=0;v<V;v++)
        
            if(!sptSet[v] && graph[u][v] && dist[u]+graph[u][v]<dist[v])
            
            
        dist[v]=dist[u]+graph[u][v];
    }

    printf("Dijkstra mesafeleri: ");
    
    for(i=0;i<V;i++) 
		printf("%d ",dist[i]);
		
    printf("\n");
}

int main(){
	
    int graph[V][V]={
        {0,10,0,0,5},
        {0,0,1,0,2},
        {0,0,0,4,0},
        {7,0,6,0,0},
        {0,3,9,2,0}
        
    };
    
    dijkstra(graph,0);
    
    
    return 0;
}
