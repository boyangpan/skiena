//
// Created by Boyang Pan on 24/01/2021.
//

#ifndef UNTITLED_GRAPH_H
#define UNTITLED_GRAPH_H
#define MAXV 1000

typedef struct edgenode {
    int y;
    int weight;
    struct edgenode *next;
} edgenode;

typedef struct graph {
    edgenode* edges[MAXV+1];
    int degree[MAXV+1];
    int nvertices;
    int nedges;
    bool directed;
} graph;

void initialize_graph(graph* g, bool directed);
void insert_edge(graph* g, int x, int y, bool directed);
void print_graph(graph* g);
void read_graph(graph* g, bool directed);

#endif //UNTITLED_GRAPH_H
