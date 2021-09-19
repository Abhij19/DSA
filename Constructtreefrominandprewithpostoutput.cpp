int index=0;
unordered_map<int,int> mp;
Node* solve(int pre[],int in[],int lb,int ub)
{
    if(lb>ub)
        return NULL;
    Node* res=new Node(pre[index++]);
    if(lb==ub)
        return res;
    res->left=solve(pre,in,lb,mid-1);
    res->right=solve(pre,in,mid+1,ub);
    return res;
}
Node* buildtree(int in[],int pre[],int n)
{
    index=0;
    for(int i=0;i<n;i++)
        mp[in[i]]=i;
    Node*root=solve(pre,in,0,n-1);
    return root;
}
