#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

int p[1001],c1;

void prime(int n)
{
    int i,j,x;
    x=sqrt(n);
    p[0]=1;

    for(i=4;i<=n;i+=2)
        p[i]=1;
    for(i=3;i<=x;i+=2)
    {
        if(p[i]==0)
        {

            for(j=i+i;j<=n;j+=i)
                p[j]=1;
        }
    }


    return;
}

int main()
{
    int n,c,c2,a,b,i,j,s;

    while(scanf("%d %d",&n,&c)!=EOF)
    {
        prime(n);
        c1=0;

        for(i=0;i<=n;i++)
        {
            if(p[i]==0)
                c1++;
        }

        if(c1&1)
            a=c*2-1;
        else
            a=c*2;

        s=(c1-a)/2;
        c2=0;

        printf("%d %d:",n,c);

        if(a<c1)
        {
            for(i=0;i<=n;i++)
            {
                if(p[i]==0)
                {
                    c2++;

                }
                if(c2>a+s)
                    break;
                if(c2>s && p[i]==0)
                    printf(" %d",i);

            }
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                if(p[i]==0)
                {
                    printf(" %d",i);
                }
            }
        }
        printf("\n\n");
    }

    return 0;
}


