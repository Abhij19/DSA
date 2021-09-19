vector<int> toposort(int V, vector<int> adj[])
{
    vector<int> indegree(V,0);
    queue<int> q;
    vector<int> v;
    for(int i=0;i<V;i++)
    {
        for(auto x:adj[V])
        {
            indegree[x]++;
        }
    }
    for(int i=0;i<V;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        v.push_back(i);
        for(auto x: adj[u])
        {
            indegree[x]--;
            if(indegree[x]==0)
            {
                q.push(x);
            }
        }
    }
    return v;
}
