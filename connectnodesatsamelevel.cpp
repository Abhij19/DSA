void connect(Node*root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        Node*prev=NULL;
        while(n--)
        {
            Node*current=q.front();
            q.pop();
            if(prev)
            {
                prev->nextright=temp;
                prev=temp;
            }
            if(current->left)
                q.push(current->left);
            if(current->right)
                q.push(current->right);
    }
}
