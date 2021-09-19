void solve(int src,int parent,vector<int> &vis,vector<int> adj[])
{
    vis[src]=1;
    for(auot x:adj[src])
    {
        if(!vis[x])
        {
            if(solve(x,src,vis,adj))
                return true;
        }
        else if(x!=parent)
            return true;
    }
    return false;
}
bool cyclic(int V,vector<int> adj[])
{
    vector<int> vis(V,0);
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            bool b=solve(i,-1,vis,adj);
            if(b)
                return true;
        }
    }
    return false;
}
