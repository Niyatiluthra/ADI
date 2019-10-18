
#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public :
    int data;
    Node *left;
    Node *right;
    Node (int d)
    {
        data = d;
        left =NULL;
        right = NULL;
    }
};
Node* insert(Node *root,int data)
{
    if(root==NULL)
    {
        Node *temp = new Node(data);
        return temp;
    }
    if(data>root->data)
    root->right = insert(root->right,data);
    else
    root->left = insert(root->left,data);

    return root;
}
Node* bstDelete(Node *root,int data)
{
    if(root==NULL)
    return NULL;
    if(root->data == data)
    {
        if(root->left==NULL&&root->right==NULL)//Case when the node is the leaf Node
        {
            delete root;
            return NULL;
        }
        else if(root->left==NULL && root->right!=NULL)//root having one child as rightChild
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL && root->left!=NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *res = root->right;
            while(res->left!=NULL)
            res = res->left;

            root->data = res->data;

            root->right = bstDelete(root->right,res->data);
            return root;
        }
        
    }
    else if(data<root->data)
    root->left =  bstDelete(root->left,data);
    else 
    root->right= bstDelete(root->right,data);

    return root;
}
void printLevelOrder(Node *root)
{
    queue<Node*> q;
    if(root==NULL)
    return ;
    q.push(root);
    while(q.empty()==false)
    {
        Node *temp = q.front();
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
        q.pop();
        cout<<temp->data<<" ";
    }
}
