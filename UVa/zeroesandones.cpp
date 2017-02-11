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
    long long int i,j,n,x,y,sum,temp,p=0;

    char a[1000005];
    while(scanf("%s",a)!=EOF)
    {
        int t;
        p++;
        scanf("%d",&t);
        printf("Case %d:\n",p);

        for(i=1;i<=t;i++)
        {
            scanf("%lld %lld",&x,&y);

            if(x>y)
            {
                temp=x;
                x=y;
                y=temp;
            }

            long long int diff=y-x+1;
            //printf("%lld ",diff);
            sum=0;

            for(j=x;j<=y;j++)
            {
                sum=sum+(a[j]-'0');
                //printf("%lld\n",sum);
            }


            if(sum==0 || sum==diff)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }



    return 0;
}



