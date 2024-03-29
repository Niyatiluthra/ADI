/*
int front=-1, rear=-1;
int s1[SIZE], s2[SIZE], top1=-1, top2=-1;
int push(int s[], int *top, int item);
int pop(int s[], int *top);

Above two stack and their push and pop functions are available, 
So complete the below two methods to implement queue using these functions. */

// Method to add an item to the queue.
void enqueue(int item)
{
  //top1++;
  push(s1,&top1,item);
}

// Method to remove an item from queue.
int dequeue()
{
  if(top1==-1)
    return -1;
  int n = top1;
  for(int i = 0 ; i <= n ; i++)
  {
    push(s2,&top2,pop(s1,&top1));
  }
  int temp = pop(s2,&top2);
  n = top2;
  for(int i = 0 ; i <= n ; i++)
  {
    enqueue(pop(s2,&top2));
  }
  return temp;
}