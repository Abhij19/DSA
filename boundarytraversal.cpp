void lefttree(Node*root,vector<int> &ans)
{
    if(!root)
        return NULL;
    if(root->left)
    {
        ans.push_back(root->data);
        lefttree(root->left,ans);
    }
    else if(root->right)
    {
        ans.push_back(root->data);
        lefttree(root->right,ans);
    }
}
void leaf(Node*root,vector<int> &ans)
{
    if(!root)
        return NULL;
    leaf(root->left,ans);
    if(!root->left && !root->right)
        ans.push_back(root->data);
    leaf(root->right,ans);
}
void righttree(Node*root,vector<int> &ans)
{
    if(!root)
        return NULL;
    if(root->right)
    {
        ans.push_back(root->data);
        righttree(root->right,ans);
    }
    else if(root->left)
    {
        ans.push_back(root->data);
        righttree(root->left,ans);
    }
}
vector<int> printboundary(Node*root)
{
    vector<int> ans;
    ans.push_back(root->data);
    lefttree(root->left,ans);
    leaf(root,ans);
    righttree(root->right,ans);
    return ans;
}
