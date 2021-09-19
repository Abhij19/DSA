vector<int> bfs(int V,vector<int> adj[])
{
    vector<int> visited(V,0);
    queue<int> q;
    vector<int> res;
    q.push(0);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        res.push_back(u);
        for(auto x: adj[u])
        {
            if(visited[x]==false)
            {
                q.push(x);
                visited[x]=true;
            }
        }
    }
    return res;
}
