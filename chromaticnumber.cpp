#include<bits/stdc++.h>
using namespace std;
void graphColoring(vector<int> graph[],int V)
{
    vector<int> color(V,-1);
    color[0]=1;
    vector<bool> alreadyassigned(V,false);
    for(int i=1;i<V;i++)
    {
        for(auto u: graph[i])
        {
            if(color[u]!=-1)
                alreadyassigned[color[u]]=true;
        }
        // find first available color
        int c;
        for(c=1;c<=V;c++)
        {
            if(alreadyassigned[c]==false)
                break;
        }
        color[i]=c;
    }
    for (int u = 0; u < V; u++)
        cout << "Vertex" << u << " ---> Color " << color[u] << endl;
    cout << "Number of colors required: " << *max_element(color.begin(), color.end()) << endl;
}
void addEdge(vector<int> graph[],int u,int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}
int main()
{
    int V=10;
    vector<int> graph[V];
    addEdge(graph,0,1);
    addEdge(graph, 0, 4);
    addEdge(graph, 0, 5);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 6);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 8);
    addEdge(graph, 3, 4);
    addEdge(graph, 3, 9);
    addEdge(graph, 4, 7);
    addEdge(graph, 5, 8);
    addEdge(graph, 5, 9);
    addEdge(graph, 6, 7);
    addEdge(graph, 6, 9);
    addEdge(graph, 7, 8);

    graphColoring(graph, V);
    cout << endl;
    return 0;
}
