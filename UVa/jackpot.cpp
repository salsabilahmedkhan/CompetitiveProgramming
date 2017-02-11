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
    int n,a[10005],prev,max;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        prev=0,max=0;

        for(int i=0;i<n;i++)
        {
            if(prev>0)
                prev+=a[i];
            else
                prev=a[i];
            if(prev>max)
                max=prev;
        }

        if(max)
            printf("The maximum winning streak is %d.\n",max);
        else
            printf("Losing streak.\n");
    }


    return 0;
}



