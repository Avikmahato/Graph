#include <stdio.h>
#include <stdlib.h>

struct Graph
{
    int V;
    int E;
    int **Adj;
};

struct Graph *AdjMatrixOfGraph()
{
    int u, v, i;
    struct Graph *G;
    G = (struct Graph *)malloc(sizeof(struct Graph));
    if (G == NULL)
    {
        printf("Memory Error\n");
        exit(0);
    }
    printf("Enter No Of Nodes And Edges:");
    scanf("%d%d", &G->V, &G->E);
    // printf("%d\n\n%d", G->V, G->E);

    G->Adj = malloc(sizeof(int) * (G->V * G->V));
    for (u = 0; u < G->V; u++)
    {
        for (v = 0; v < G->V; v++)
        {
            G->Adj[u][v] = 0;
        }
    }

    for (i = 0; i < G->E; i++)
    {
        printf("Enter No Of Node Which Are Connected And Made Edges:");
        scanf("%d%d", &u, &v);
        G->Adj[u][v] = 1;
        G->Adj[v][u] = 1;
    }
    return G;
}

int main()
{
    struct Graph *Avik;
    Avik = AdjMatrixOfGraph();
    printf("The No Of Nodes Is: %d", Avik->V);
    printf("The No Of Edges Is: %d", Avik->E);
    return 0;
}