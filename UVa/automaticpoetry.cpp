#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>

using namespace std;

#define PI 3.141592653589793
#define MAX 2000000000

typedef long long int lld;


int main()
{
    char a[105],b[105],s5[105],s2[105],s3[105],s4[105];
    int t,i,j;
    scanf("%d\n\n",&t);
    while(t--)
    {
        gets(a);
        gets(b);
        for(i=0;a[i];i++)
        {
            if(a[i]=='<' || a[i]=='>')
            {
                continue;
            }
            else
                printf("%c",a[i]);
        }
        int p,c=0,k;
        for(i=0;a[i];i=p+1)
        {
            if(a[i]=='<')
            {
                c++;
              for(j=i+1,k=0;;j++,k++)
              {
                  if(a[j]=='>')
                   {
                       if(c==1)

                   }
                    if(c=1)
                    {
                      s2[k]=a[j];
                    }

              }

            }
        }
    }


    return 0;
}



