#include "Graph.hpp"
#include <climits>
#include <iostream>
using namespace std;

# define vertex 5  //number of couteries = 5

int Graph::minDist()
{
    int index, min = INT_MAX;
    for ( int i = 0; i < vertex ; i++)
    {
        if ( Dset[i] == false && Dist[i] <= min)
        {
            min = Dist[i];
            index = i;
        }
    }
    return index;
}

int Graph::Dijkstra(int i, int j)
{
    for ( int a = 0 ; a < vertex ; a++)
    {
        Dist[a] = INT_MAX;
        Dset[a] = false;
    }
    Dist [i] = 0;
    for ( int b = 0 ; b < vertex ; b++)
    {
        int u = minDist();
        Dset[u] = true;
        for ( int v = 0; v < vertex ; v++)
        {
            if ( !Dset[v] && /*adjMatrix[u][v] && */  Dist[u]!= INT_MAX && Dist[u]+adjMatrix[u][v] < Dist[v] )
            {
                Dist[v] = Dist[u]+adjMatrix[u][v];
            }
        }
    }
    return Dist[j];
}
