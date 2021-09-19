bool ispartite(int V,vector<int> adj[])
{
    queue<pair<int,int>> q;
    vector<int> color(V,-1);
    for(int i=0;i<V;i++)
    {
        if(color[i]==-1)
        {
            q.push({i,0});
            color[i]=0;
            while(!q.empty())
            {
                pair<int,int> p=q.front();
                int v=p.first // vertex;
                int col=p.second // color;
                for(auto x: adj[v])
                {
                    if(color[x]==col)
                        return 0;
                    if(color[x]==-1)
                    {
                        color[x]=(col)?0:1;
                        q.push({x,color[x]});
                    }
                }
            }
        }
    }
    return 1;
}
