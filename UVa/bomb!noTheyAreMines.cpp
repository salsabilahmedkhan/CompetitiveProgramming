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

int g[1005][1005],visit[1005][1005],cost[1005][1005];
int s1,x2,s2,y2,r,c;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void bfs()
{
    mem(visit,0);
    mem(cost,0);
    queue <int> qx,qy;
    qx.push(s1);
    qy.push(s2);

    visit[s1][s2]=1;
    cost[s1][s2]=0;

    while(!qx.empty())
    {
       int u1=qx.front();
       int u2=qy.front();
       qx.pop();
       qy.pop();
       for(int i=0;i<4;i++)
       {
           int v1=u1+dx[i];
           int v2=u2+dy[i];

           if(v1<0 || v1>r-1)
            continue;
           if(v2<0 || v2>c-1)
            continue;
           if(!visit[v1][v2] && !g[v1][v2])
           {
               visit[v1][v2]=1;
               cost[v1][v2]=cost[u1][u2]+1;
               qx.push(v1);
               qy.push(v2);

           }
       }
    }
}

int main()
{
    int r1,r2,c1,c2;

    while(scanf("%d %d",&r,&c)!=EOF)
    {
        mem(g,0);
        if(r==0 && c==0)
            break;

        scanf("%d",&r1);
        for(int i=0;i<r1;i++)
        {
            scanf("%d %d",&r2,&c1);
            while(c1--)
            {
                scanf("%d",&c2);
                g[r2][c2]=1;
            }
        }

        scanf("%d %d %d %d",&s1,&s2,&x2,&y2);
        bfs();
        printf("%d\n",cost[x2][y2]);
    }
    return 0;
}



