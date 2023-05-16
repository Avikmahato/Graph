#include <stdio.h>
#include <stdlib.h>

int V;
int E;
int Adj[100][100];

int main()
{
    int u, v, i;

    printf("Enter no Of Edges And Nodes:");
    scanf("%d%d", &E, &V);

    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
            Adj[u][v] = 0;

    for (i = 0; i < E; i++)
    {

        printf("Enter Points Of Edges:");
        scanf("%d%d", &u, &v);
        Adj[u][v] = 1;
        Adj[v][u] = 1;
    }
    i=1;
    printf("The No Of Edges : %d\n", E);
    printf("The No Of Nodes : %d\n", V);
    printf("\tEdges Point\n\n");
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
        {
            if(Adj[u][v]==1)
            printf("%d) %d<---->%d\n\n",i++, u, v);
        }

    return 0;
}