#include <cstdio>
#include <iostream>
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
    int a[100],n,i,sum[100],max,m,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sum[0]=a[0];
    max=sum[0];
    for(i=1;i<n;i++)
    {
        if(sum[i-1]>0)
            sum[i]=sum[i-1]+a[i];
        else
            sum[i]=a[i];

        if(sum[i]>max)
        {
            max=sum[i];
            m=i;
        }

    }

    for(i=m;i>=0;i--)
    {
        if(sum[i]<0)
            break;
    }
    for(j=i+1;j<=m;j++)
        printf("%d ",a[j]);

    return 0;
}



