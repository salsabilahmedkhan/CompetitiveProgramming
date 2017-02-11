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

vector <int> g[25];
int dis[25];

void bfs(int s,int des)
{
    queue <int> q;
    int visit[25]={0};
    mem(dis,0);
    q.push(s);
    dis[s]=0;
    visit[s]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!visit[v])
            {
                dis[v]=dis[u]+1;
                visit[v]=1;
                q.push(v);
                if(v==des)
                    return;
            }
        }
    }
}

int main()
{
    int x,t=0,temp;
    while(scanf("%d",&x)!=EOF)
    {
        for(int i=1;i<=x;i++)
        {
            scanf("%d",&temp);
            g[1].push_back(temp);
            g[temp].push_back(1);
        }
        for(int i=2;i<=19;i++)
        {
            scanf("%d",&x);
            for(int j=1;j<=x;j++)
            {
                scanf("%d",&temp);
                g[i].push_back(temp);
                g[temp].push_back(i);
            }

        }
        int n,a,b;
        t++;
        printf("Test Set #%d\n",t);
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d %d",&a,&b);
            bfs(a,b);
            int ans=dis[b];
            printf("%2d to %2d: ",a,b);
            printf("%d\n",ans);
        }
        printf("\n");
        for(int i=0;i<=20;i++)
            g[i].clear();

    }


    return 0;
}



