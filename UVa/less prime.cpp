
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

int p[1000001];

void prime(int n)
{

    int i,j,x;
    x=sqrt(n);
    p[0]=p[1]=1;
    for(i=2;i<=n;i+=2)
    {
        p[i]=1;
    }
    for(i=3;i<=x;i++)
    {
        if(p[i]==0)
        {
            for(j=i+i;j<=n;j=j+i)
            {
                p[j]=1;
            }
        }
    }

    return;
}

int main()
{
    int t,j,n,x,c,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int max=0;
        scanf("%d",&n);
        prime(n);
        c=n/2+1;
        for(j=c;j<=n;j++)
        {
            if(p[j]==0)
                break;
        }
        printf("%d\n",j);

    }



    return 0;
}


