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

int n,d,k,dur[25],song[25][10005],keep[25][10005],songs[25];

void mapping()
{
    k=0;
    for(int i=d,j=n;i>0;i--)
    {
            if(keep[i][j]==1)
                songs[k++]=dur[i],j=j-dur[i];
            else
                continue;
    }
    for(int i=k-1;i>=0;i--)
        printf("%d ",songs[i]);
}

int knapsack()
{
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<dur[i])
                song[i][j]=song[i-1][j],keep[i][j]=0;

            else
            {
                if(j-dur[i]==0)
                {
                    if(song[i-1][j]>dur[i])
                        song[i][j]=song[i-1][j],keep[i][j]=0;
                    else
                        song[i][j]=dur[i],keep[i][j]=1;
                }
                else
                {
                    if((dur[i]+song[i-1][j-dur[i]])>song[i-1][j])
                        song[i][j]=dur[i]+song[i-1][j-dur[i]],keep[i][j]=1;
                    else
                        song[i][j]=song[i-1][j],keep[i][j]=0;
                }
            }
        }
    }

    return song[d][n];
}

int main()
{
    int i,j;

    while(scanf("%d %d ",&n,&d)!=EOF)
    {
        for(i=1;i<=d;i++)
            scanf("%d",&dur[i]);
        mem(song,0);
        int sum=knapsack();
        /*for(i=0;i<=d;i++)
        {
            for(j=1;j<=n;j++)
                cout<<keep[i][j]<<" ";
            cout<<endl;
        }*/
        mapping();

        printf("sum:%d\n",sum);
    }

    return 0;
}



