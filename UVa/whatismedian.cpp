#include <cstdio>
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
    int a[10005],i=1,n,m,j;
    a[0]=-1;
    while(scanf("%d",&a[i])!=EOF)
    {
        sort(a,a+i+1);

        if(i & 1)
        {
            n=i/2+1;
            printf("%d\n",a[n]);
        }
        else
        {
            n=i/2;
            //printf("%d %d\n",a[n],a[n+1]);
            m=a[n]+a[n+1];
            m=m/2;
            printf("%d\n",m);
        }

        i++;
    }


    return 0;
}



