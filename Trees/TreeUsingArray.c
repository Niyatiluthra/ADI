/* struct Node {
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node and the function below is also provided to build a new node with given data. 
struct Node* newNode(int data);
*/
struct Node* buildTree(int t[], int n)
{
  struct Node* node = (struct Node*)malloc(sizeof(struct Node));
  // Complete the function body
  if(n==0)
    return NULL;
  node->data = t[0];
  node->left = NULL;
  node->right = NULL;
  int c=0;
  struct Node* temp = node;
  struct Node*temp2 = temp;
  for(int i = 1 ; i < n ; i++)
  {
    struct Node* leftN = (struct Node*)malloc(sizeof(struct Node));
    struct Node* rightN = (struct Node*)malloc(sizeof(struct Node));
    leftN->data = t[i];
    temp2->left = leftN;
    i++;
    if(i<n)
    {
      rightN->data = t[i];
      temp2->right = rightN;
    }
    if(c%2==0)
    {
      temp2 = temp->left;
    }
    else 
    {
      temp2 = temp->right;
      temp = temp->left;
    }
    c++;
  }
  return(node);
}