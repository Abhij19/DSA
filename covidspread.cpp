bool issafe(vector<vector<int>> &grid,int n,int m,int i,int j)
{
    return (i>=0 && i<n && j>=0 && j<m && grid[i][j]==1);
}
int covidspread(vector<vector<int>> grid)
{
    vector<int> ans;
    int timer=-1;
    queue<pair<int,int>> q;
    int m=grid[0].size();
    int n=grid.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<grid[i].size();j++)
        {
            if(grid[i][j]==2)
            {
                q.push({i,j});
                grid[i][j]==3;
            }
        }
    }
    while(!q.empty())
    {
        int counter=q.size();
        for(int k=0;k<counter;k++)
        {
            auto index=q.front();
        int i=index.first;
        int j=index.second;
        if(issafe(grid,n,m,i,j+1)==true)
        {
            q.push({i,j+1});
            grid[i][j+1]=3;
        }
        if(issafe(grid,n,m,i,j-1)==true)
        {
            q.push({i,j-1});
            grid[i][j-1]=3;
        }
        if(issafe(grid,n,m,i+1,j)==true)
        {
            q.push({i+1,j});
            grid[i+1][j]=3;
        }
        if(issafe(grid,n,m,i-1,j)==true)
        {
            q.push({i-1,j});
            grid[i-1][j]=3;
        }
        q.pop();
        }
        timer++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
                return -1;
            }
        }
    }
    return timer;
}
