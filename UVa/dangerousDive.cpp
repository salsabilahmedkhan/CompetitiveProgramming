
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;


int main()
{
    int i,j,n,r,a[100000],b[100000];
    while(scanf("%d %d",&n,&r)!=EOF)
    {
        memset(b,0,sizeof(b));
        for(i=1;i<=r;i++)
            {
                scanf("%d",&a[i]);
                b[a[i]]++;
            }
        if(n==r)
            printf("*\n");
        else
        {

            for(i=1;i<=n;i++)
            {
                if(b[i]==0)
                    printf("%d ",i);
            }
            printf("\n");
        }

    }

    return 0;
}


