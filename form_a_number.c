#include<stdio.h>
int formNumber()
{
  int n,x,s=0;
  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&x);
    s=s*10+x;
  }
  return s;
}

int main()
{
  int x=formNumber();
  printf("NUMBER = %d",x);
  return 0;
}
