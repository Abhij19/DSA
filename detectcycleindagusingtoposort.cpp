bool iscyclic(int V,vector<int> adj[])
{
    vector<int> indegree(V,0);
    queue<int> q;
    for(int i=0;i<V;i++)
    {
        for(auto x:adj[i])
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
    int counter=q.size();
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto x:adj[u])
        {
            indegree[x]--;
            if(indegree[x]==0)
            {
                q.push(x);
                counter++;
            }
        }
    }
    if(counter==V)
        return false;
    else
        return true;
}
