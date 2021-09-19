bool areidentical(Node*S,Node*T)
{
    if(S==NULL || T==NULL)
        return false;
    if(T==NULL && S==NULL)
        return true;
    return (S->data==T->data && areidentical(S->left,T->left) && areidentical(S->right,T->right));
}
bool issubtree(Node*S,Node*T)
{
    if(T==NULL)
        return true;
    if(S==NULL)
        return false;
    if(areidentical(S,T))
        return true;
    return issubtree((S->left,T) || issubtree(S->right,T));
}
