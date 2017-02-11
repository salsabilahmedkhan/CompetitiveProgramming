
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

int a[20000001],ans[100005];

void isPrime()
{
    int x,i,j,k=1;

    x=sqrt(20000000);
    a[0]=a[1]=1;
    for(i=4;i<=20000000;i+=2)
        a[i]=1;
    for(i=3;i<=x;i++)
    {
        if(a[i]==0)
        {
            for(j=i+i;j<=20000000;j+=i)
            {
                a[j]=1;
            }
            if(a[i]==0 && a[i-2]==0)
                ans[k++]=i-2;
        }
    }

    return;
}



int main()
{
    int n,c,i;
    isPrime();
    while(scanf("%d",&n)!=EOF)
    {
        printf("(%d, %d)\n",ans[n],ans[n]+2);
    }

    return 0;
}



