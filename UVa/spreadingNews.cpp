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

vector <int> g[2600];
int visit[2600],dis[2600],maxb,c;

void bfs(int s)
{
    queue <int> q;
    mem(visit,0);
    mem(dis,0);
    q.push(s);
    dis[s]=0;
    maxb=-1;
    visit[s]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        if(g[u][0]>maxb)
            maxb=g[u][0],c=u;
        for(int i=1;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!visit[v])
            {
                dis[v]=dis[u]+1;
                visit[v]=1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int e,i,j;
    scanf("%d",&e);
    for(i=0;i<e;i++)
    {
        int a,b;
        scanf("%d",&a);
        g[i].pb(a);
        for(j=1;j<=a;j++)
        {
            scanf("%d",&b);
            g[i].pb(b);
        }
    }
        int t,emp;
        scanf("%d",&t);
        for(j=1;j<=t;j++)
        {
            scanf("%d",&emp);
            bfs(emp);
            if(maxb==0)
                printf("0\n");
            else
                printf("%d %d\n",maxb,dis[c]+1);
        }



    return 0;
}



