void solve(int src, vector<int> &vis,vector<int> &order,vector<int> adj[])
{
    vis[src]=1;
    vis[order]=1;
    for(auto x:adj[src])
    {
        if(!vis[x])
        {
            bool c=solve(x,vis,order,adj);
            if(c==true)
                return true;
        }
        else if(order[x])
            return true;
    }
    return false;
}
bool iscyclic(int V,vector<int> adj[])
{
    vector<int> vis(V,0);
    vector<int> order(V,0);
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            bool x=solve(i,vis,order,adj);
            if(x==true)
                return true;
        }
    }
    return false;
}
