#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;
int p[1000001];

void prime()
{
    int i,j,x;
    x=sqrt(1000000);
    p[0]=p[1]=1;
    for(i=4;i<=1000000;i+=2)
        p[i]=1;
    for(i=3;i<=x;i+=2)
    {
        if(p[i]==0)
        {
            for(j=i+i;j<=1000000;j+=i)
            {
                p[j]=1;
            }
        }
    }

    return;

}

int main()
{
    int n,i,j,a,b,f;
    prime();
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;


        f=0;
        for(i=2;i<=n;i++)
        {
            if(p[i]==0 && p[n-i]==0)
            {
                f=1;
                a=i;
                b=n-i;
                break;
            }
        }

        if(f==0)
            printf("Goldbach's conjecture is wrong.\n");
        else
            printf("%d = %d + %d\n",n,a,b);

    }



    return 0;
}



