int height(struct Node*node)
{
    if(node==NULL)
        return 0;
    return max(height(node->left)+1,height(node->right)+1);
}
int ma;
int func(Node*root)
{
    if(!root)
        return NULL;
    int x=func(root->left);
    int y=func(root->right);
    ma=max(ma,x+y+1);
    return (max(x,y)+1);
}
int diameter(Node*root)
{
    ma=INT_MIN;
    int x=func(root);
    return ma;
}
