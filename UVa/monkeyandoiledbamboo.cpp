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
    long long int t,n,i,r[100005],diff,max,j=0;
    scanf("%lld",&t);
    while(t--)
    {
        j++;
        scanf("%lld",&n);
        max=-1;
        r[0]=0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&r[i]);

        }

        for(i=1;i<n;i++)
        {
            diff=r[i]-r[i-1];
            if(diff==max)
                max+=1;
            if(diff>max)
                max=diff;
        }
        printf("Case %lld: %lld\n",j,max);
    }

    return 0;
}



