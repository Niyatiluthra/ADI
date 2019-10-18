int rotationCount(int a[], int size)
{
  int i,c=0;
  for(i=0;i<size;i++)
  {
    if(a[i]>a[size-1])
      c++;
    else
      break;
  }
  if(c)
    return c;
  else
    return -1;
}