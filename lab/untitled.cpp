// A C Program to demonstrate adjacency list 
// representation of graphs
#include <stdio.h>
#include <stdlib.h>
typedef struct AdjListNode ad;
typedef struct AdjList list;
typedef struct Graph grap;

// A structure to represent an adjacency list node
struct AdjListNode
{
    int dest;
    ad *next;
};
 
// A structure to represent an adjacency list
struct AdjList
{
    ad *head; 
};
 
// A structure to represent a graph. A graph
// is an array of adjacency lists.
// Size of array will be V (number of vertices 
// in graph)
struct Graph
{
    int V;
    list* array;
};
 
// A utility function to create a new adjacency list node
ad* newAdjListNode(int dest)
{
    ad* node =(ad*) malloc(sizeof(ad));
    node->dest = dest;
    node->next = NULL;
    return node;
}
 
// A utility function that creates a graph of V vertices
grap* createGraph(int V)
{
    grap *graph = (grap *) malloc(sizeof(grap));
    graph->V = V;
 
    // Create an array of adjacency lists.  Size of 
    // array will be V
    graph->array = (list*) malloc(V * sizeof(list));
 
    // Initialize each adjacency list as empty by 
    // making head as NULL
    int i;
    for (i = 0; i < V; ++i)
        graph->array[i].head = NULL;
 
    return graph;
}
 
// Adds an edge to an undirected graph
void addEdge(grap* graph, int src, int dest)
{
    // Add an edge from src to dest.  A new node is 
    // added to the adjacency list of src.  The node
    // is added at the begining
    ad* newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
 
    // Since graph is undirected, add an edge from
    // dest to src also
    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}
 
// A utility function to print the adjacency list 
// representation of graph
void printGraph(grap* graph)
{
    int v;
    for (v = 0; v < graph->V; ++v)
    {
        ad * pCrawl = graph->array[v].head;
        printf("\n Adjacency list of vertex %d\n head ", v);
        while (pCrawl)
        {
            printf("-> %d", pCrawl->dest);
            pCrawl = pCrawl->next;
        }
        printf("\n");
    }
}
 
// Driver program to test above functions
int main()
{
    // create the graph given in above fugure
    int V = 5;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
 
    // print the adjacency list representation of the above graph
    printGraph(graph);
 
    return 0;
}
