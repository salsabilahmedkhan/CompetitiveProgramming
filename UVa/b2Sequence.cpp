
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

#define PI 3.141592653589793
#define MAX 2000000000

typedef long long int lld;

int sum1[1000005];


int main()
{
    int n,i,j,sum,a[105],t=0,f,max,g;
    while(scanf("%d",&n)!=EOF)
    {
        t++;
        f=0,g=0;
        memset(sum1,0,sizeof(sum1));
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        if(a[0]<1)
            g=1;

        for(i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
            g=1;
        }
        if(g==1)
           printf("Case #%d: It is not a B2-Sequence.\n",t);
        else
        {
            max=-1;
            for(i=0;i<n;i++)
            {
                for(j=i;j<n;j++)
                {
                    sum=a[i]+a[j];
                    //printf("sum=%d\n",sum);
                    sum1[sum]++;
                    if(sum>max)
                        max=sum;

                }

            }
            for(i=0;i<=max;i++)
            {
               // printf("%d\n",sum1[i]);
                if(sum1[i]>1)
                {
                    f=1;
                    break;
                }

            }

            if(f==1)
                printf("Case #%d: It is not a B2-Sequence.\n",t);
            else
                printf("Case #%d: It is a B2-Sequence.\n",t);

        }

        printf("\n");
    }


    return 0;
}


