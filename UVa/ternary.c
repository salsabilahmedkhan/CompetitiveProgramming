#include <stdio.h>
#include<string.h>
int main()
{
  int a,len,i;
  char b[10000];
  while(scanf("%d",&a))
  {
      if(a<0)
        return 0;
      else if(a==0)
        printf("0\n");

      else
      {
          for(i=0;a!=0;i++)
          {
              b[i]=a%3+'0';
              a=a/3;
          }
          len=i;
          for(i=len-1;i>=0;i--)
          {
              printf("%c",b[i]);
          }
      printf("\n");
      }

  }
  return 0;

}
