#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class Graph
{
private:
    vector  <vector <int>> adjMatrix;
    vector <int> Dist;
    vector <bool> Dset;
public:
    int minDist ();
    int Dijkstra ( int i, int j);
};

#endif /* Graph_hpp */

