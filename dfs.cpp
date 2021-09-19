void dfs(int src,vector<int> &vis,vector<int> adj[],vector<int> &v)
{
    vis[src]=1;
    v.push_back(src);
    for(auto x: adj[src])
    {
        if(!vis[x])
        {
            dfs(x,vis,adj,v);
        }
    }
}
vector<int> dfs(int V, vector<int> adj[])
{
    vector<int> vis(V,0)
    vector<int> v;
    dfs(0,vis,adj,v);
    return v;
}
