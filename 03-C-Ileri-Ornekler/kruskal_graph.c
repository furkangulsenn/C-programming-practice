#include <stdio.h>
#define E 7
#define V 5

typedef struct Edge{ int u,v,weight; } Edge;

int i;

Edge edges[E] = {{0,1,10},{0,4,5},{1,2,1},{1,4,2},{2,3,4},{3,4,2},{4,2,9}};

int parent[V];

int find(i){ while(parent[i]!=i)i=parent[i]; return i; }

void union_set(int u,int v){ parent[find(u)]=find(v); }

int main(){
	
	int i;
	
    for(i=0;i<V;i++) 
		parent[i]=i;
		
    printf("Kruskal MST Edges: ");
    
    for(i=0;i<E;i++){
    	
        int u=edges[i].u,v=edges[i].v;
        int set_u=find(u), set_v=find(v);
        
        if(set_u!=set_v){
        	
            printf("(%d-%d) ",u,v);
            union_set(set_u,set_v);
        }
    }
    
    printf("\n");
    
    
    return 0;
}
