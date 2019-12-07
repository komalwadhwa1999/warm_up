#include <stdio.h>
int main()
{
  int n,s=0;
  scanf("%d",&n);
  int i,x;
  for(i=0;i<n;i++)
  {
    scanf("%d",&x);
    s=s+x;
  }
  printf("%d",s);
  
    return 0;
}
