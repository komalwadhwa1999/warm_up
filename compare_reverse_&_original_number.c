#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i,x,j,r,s=0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&x);
    int bkp=x;
    while(x!=0)
    {
      r=x%10;
      s=s*10+r;
      x=x/10;
    }
    if(s==bkp)
    {
      printf("Equal\n");
      s=0;
    }
    else
    {
      printf("Not Equal\n");
      s=0;
    }
  }
    return 0;
}
