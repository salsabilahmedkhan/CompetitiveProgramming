#include <cstdio>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <utility>

using namespace std;

#define PI 3.141592653589793
#define pi acos(-1.0)
#define MAX 2000000000
#define pb push_back
#define rep(i,n) for(int i=0;i<(n);i++)
#define repp(i,a,n) for(int i=(a);i<(n);i++)
#define dec(i,n) for(int i=(n);i>0;i--)
#define decc(i,a,n) for(int i=(a);i>(n);i--)
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
#define abs(a) ((a)<0?-(a):(a))
#define sqr(a) ((a)*(a))
#define mem(a,b) memset((a),(b),sizeof(a))

typedef long long int lld;
typedef unsigned int ui;

int v[1005],w[1005],max_val[1005][1005];

int knapsack(int n,int kw)
{
    int i;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=kw;j++)
        {
            if(j<w[i])
                max_val[i][j]=max_val[i-1][j];
            else
            {
                if(j-w[i]==0)
                {
                    if(max_val[i-1][j]>v[i])
                        max_val[i][j]=max_val[i-1][j];
                    else
                        max_val[i][j]=v[i];
                }
                else
                {
                    if((v[i]+max_val[i-1][j-w[i]])>max_val[i-1][j])
                        max_val[i][j]=v[i]+max_val[i-1][j-w[i]];
                    else
                        max_val[i][j]=max_val[i-1][j];
                }

            }

        }
    }

    return max_val[n][kw];
}

int main()
{
    int t,n,i,kw;
    scanf("%d",&t);
    while(t--)
    {
        mem(max_val,0);
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d %d",&v[i],&w[i]);

        int g,knap,sum=0;
        scanf("%d",&g);
        for(i=1;i<=g;i++)
        {
            scanf("%d",&kw);
            knap=knapsack(n,kw);
            sum+=knap;
        }

        printf("%d\n",sum);

    }


    return 0;
}



