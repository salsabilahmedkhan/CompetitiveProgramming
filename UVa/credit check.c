#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char a[100];
  int b[100];
  int t,i,j;
  scanf("%d\n",&t);
  for(i=1;i<=t;i++)
  {
      gets(a);
      int f=0,d,s1=0,s2=0;
      for(j=0;j<19;j++)
      {
          if(isdigit(a[j]))
          {
              b[f]=a[j]-'0';
              f++;
          }
      }

      for(j=0;j<16;j+=2)
      {
          d=b[j]+b[j];
          s1=s1+d/10+d%10;
      }
      for(j=1;j<16;j+=2)
      {
          s2=s2+b[j];
      }
      int s=s1+s2;
      if(s%10==0)
        printf("Valid\n");
      else
        printf("Invalid\n");
  }

  return 0;
}
