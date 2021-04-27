#ifndef Graph_hpp
#define Graph_hpp

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

#endif /* Graph_hpp */
