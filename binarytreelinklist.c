#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node*right,*left;
};
struct node *root=NULL;
void insert(struct node*root,struct node*newnode)
{
    int ch;
    printf("\n Press 0 for left and 1 for right of ROOT=%d",root->data);
    scanf("%d",&ch);
    printf("%d",ch);
    if(ch==1)
    {
        if(root->right==NULL)
            root->right=newnode;
        else
            insert(root->right,newnode);
    }
    else
    {
        if(root->left==NULL)
            root->left=newnode;
        else
            insert(root->left,newnode);
    }
}
void traverse(struct node*root)
{
    if(root!=NULL)
    {
        traverse(root->left);
        printf("%d",root->data);
        traverse(root->right);
    }
}
void main()
{
    struct node*newnode;
    char ans ;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->left=NULL;
        newnode->right=NULL;
        printf("Enter the data");
        scanf("%d",&newnode->data);
        if(root==NULL)
            root=newnode;
        else
            insert(root,newnode);
        printf("\n Do you wish to continue(Y/N)");
        fflush(stdin);
        ans=getch();
        fflush(stdin);
    }while(ans=='y'|| ans=='Y');
    traverse(root);
}
