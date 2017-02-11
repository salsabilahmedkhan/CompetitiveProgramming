
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

int a[1000001];

int PrimeRev(int n)
{
    int r=0;
    while(n!=0)
    {
       r=r*10+n%10;
       n=n/10;
    }

    return r;
}

void isPrime()
{
    int x,i,j;
   //memset(a,0,sizeof(a));
    x=sqrt(1000000);
    a[0]=a[1]=1;
    for(i=4;i<=1000000;i+=2)
        a[i]=1;
    for(i=3;i<=x;i++)
    {
        if(a[i]==0)
        {
            for(j=i+i;j<=1000000;j+=i)
            {
                a[j]=1;
            }
        }
    }

    return;
}

int main()
{
    int n,p,r;
    isPrime();
    while(scanf("%d",&n)!=EOF)
    {

        if(a[n]==1)
            printf("%d is not prime.\n",n);
        else
        {
            r=PrimeRev(n);
            if(a[r]==0 && r!=n)
                printf("%d is emirp.\n",n);
            else
                printf("%d is prime.\n",n);
        }
    }

    return 0;
}


