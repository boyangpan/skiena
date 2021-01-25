//
// Created by Boyang Pan on 24/01/2021.
//
#include "../../ds/graph/graph.h"
#include "../../ds/queue/queue.h"

bool processed[MAXV + 1];
bool discovered[MAXV + 1];
int parent[MAXV + 1];

void initialize_search(graph* g){
    int i;

    for(i=1;i<g->nvertices;i++){
        processed[i]=discovered[i]=false;
        parent[i]=-1;
    }
}

void bfs(graph* g, int start){
    queue q;
    int v;
    int y;
    edgenode* p;

    init_queue(&q);
    enqueue(&q,start);
    discovered[start]=true;
}
