#include <stdio.h>

int main()
{
int n,x,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&x);
    int r,s=0;
   while(x>=1)
    {
      r=x%10;
      s=s+r;
      x=x/10;
    }
    printf("%d\n",s);
  }
  
    return 0;
}
