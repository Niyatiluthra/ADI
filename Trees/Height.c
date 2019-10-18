#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node * newNode(int d)
{
    struct node * temp = (struct node*) malloc(sizeof(struct node));
    temp->data = d;
    temp->left = NULL;
    temp->right = NULL;
}

int height(struct node * root)
{
    if(root==NULL)
        return 0;

    int hl = height(root->left);
    int hr = height(root->right);

    if(hl>hr)
        return hl+1;
    else 
        return hr+1;
}
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(6);
    root->left->left->right = newNode(7);
    root->left->right->left = newNode(8);
    root->left->right->left->right = newNode(9);
    root->right->left = newNode(10);
    root->right->right = newNode(11);
    root->right->right->left = newNode(12);
    root->right->right->right = newNode(13);

    int h = height(root);
    printf("Height of the tree is %d",h);
}