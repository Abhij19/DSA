vector<int> leftview(Node*root)
{
    vector<int> ans;
    queue<Node*> q;
    if(!root)
        return;
    q.push(root);
    while(!q.empty())
    {
        int count=q.size();
        ans.push_back(q.front()->data);
        while(sz--)
        {
            Node*current=q.front();
            q.pop();
            if(current->left)
                q.push(current->left);
            if(current->right)
                q.push(current->right);
        }
    }
    return res;
}
vector<int> rightview(Node*root)
{
    queue<Node*> q;
    vector<int> v;
    if(!root)
        return;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        for(int i=1;i<=n;i++)
        {
            Node*temp=q.front();
            q.pop();
            if(i==n)
                v.push_back(temp->data);
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    return v;
}
