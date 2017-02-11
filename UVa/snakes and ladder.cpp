#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    int t,i,j,a[1000001],b[1000001],p,q,r,x[1000001];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",p,q,r);
        for(j=0;j<q-1;j+=2)
        {
            scanf("%d %d",&x[j],&x[j+1]);
        }
        for(j=0;j<p;j++)
        {
            scanf("%d",a[j]);
        }
        int s=1;

    }



    return 0;
}


