
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
    int t,i,n,j,a[15],b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        memset(a,0,sizeof(a));
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            b=j;

            while(b!=0)
            {
                //printf("%d\n",b);
                a[b%10]++;
                b=b/10;
            }
        }
        for(j=0;j<10;j++)
        {
           printf("%d",a[j]);
           if(j<9)
                printf(" ");
        }

        printf("\n");

    }


    return 0;
}

