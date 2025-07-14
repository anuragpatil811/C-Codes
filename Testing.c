#include <stdio.h>
#include <stdlib.h>

// Function to perform in-order traversal of the graph
void inOrderTraversal(int** graph, int V, int vertex, int visited[]) 
{
	int i;
    visited[vertex] = 1;
    printf("%d ", vertex);

    for (i = 0; i < V; i++) {
        if (graph[vertex][i] && !visited[i]) {
            inOrderTraversal(graph, V, i, visited);
        }
    }
}

int main() {
    int V, E, i, j;

    // Input the number of vertices and edges
    printf("Enter the number of vertices: ");
    scanf("%d", &V);

    printf("Enter the number of edges: ");
    scanf("%d", &E);

    // Create an adjacency matrix
    int** graph = (int**)malloc(V * sizeof(int*));
    if (graph == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < V; ++i) {
        graph[i] = (int*)malloc(V * sizeof(int));
        if (graph[i] == NULL) {
            perror("Memory allocation failed");
            exit(EXIT_FAILURE);
        }
        for (j = 0; j < V; ++j)
            graph[i][j] = 0;
    }

    // Input the edges
    printf("Enter the edges (source destination):\n");
    for (i = 0; i < E; i++) {
        int src, dest;
        scanf("%d %d", &src, &dest);
        graph[src][dest] = 1;
        graph[dest][src] = 1; // Since the graph is undirected
    }

    // Traverse the graph in-order
    printf("In-order traversal of the graph: ");

    int* visited = (int*)malloc(V * sizeof(int));
    if (visited == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < V; ++i)
        visited[i] = 0;

    for (i = 0; i < V; ++i) {
        if (!visited[i]) {
            inOrderTraversal(graph, V, i, visited);
        }
    }

    // Free allocated memory
    for (i = 0; i < V; ++i)
        free(graph[i]);
    free(graph);
    free(visited);

    return 0;
}

