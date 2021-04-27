#ifndef Grap_hpp
#define Grap_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class Graph
{
private:
    vector  < vector <int>> adjMatrix;
public:
    int Dijkstra ( int i, int j);
};

#endif /* Grap_hpp */
