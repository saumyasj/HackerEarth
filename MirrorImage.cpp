#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

struct node* newNode(int data)
{
    node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
node* temp = NULL;
void search(int data,node *p)
{
    if(p==NULL)
    {
        return;
    }
    else 
    {
        search(data,p->left);
        if(p->data==data)
            temp=p;
        search(data,p->right);
    }
}

int findmirror(node* a,node* b,int data)
{
    if(a==NULL||b==NULL)
    {
        return -1;
    }
    if(a->data==data)
        return b->data;
    else if(b->data==data)
    {
        return a->data;
    }
    int ans =findmirror(a->left,b->right,data);
    if(ans !=-1)
        return ans;
    return findmirror(a->right,b->left,data);
}
int main()
{
    node* root=NULL;
    int n,q;
    int a, b;
    char side;
    cin>>n>>q;
    cin>>a>>b>>side;
    root=newNode(a);
    if(side=='L')
        root->left=newNode(b);
    else 
        root->right=newNode(b);
    n-=2;
    while(n--)
    {
        
        cin>>a>>b>>side;
        search(a,root);
        if(side=='L')
            temp->left=newNode(b);
        else 
            temp->right=newNode(b);
        temp=NULL;
    }
    while(q--)
    {
        int query;
        cin>>query;
        cout<<findmirror(root, root, query)<<endl;
    }
}
