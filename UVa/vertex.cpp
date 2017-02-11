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

vector <int> g[105];
int visit[105];

void bfs(int s)
{
    queue <int> q;
    mem(visit,0);
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!visit[v])
            {
                visit[v]=1;
                q.push(v);
            }
        }
    }
}


int main()
{
    int n,st,nxt,v;
    while(scanf("%d",&n) && n)
    {
       while(scanf("%d",&st) && st)
       {
           while(scanf("%d",&nxt) && nxt)
           {
                g[st].pb(nxt);
           }
       }

       int q;
       scanf("%d",&q);
       while(q--)
       {
           scanf("%d",&v);
           int c=0;
           bfs(v);
           for(int i=1;i<=n;i++)
                if(!visit[i])
                    c++;
            printf("%d",c);

            for(int i=1;i<=n;i++)
                if(!visit[i])
                    printf(" %d",i);

            printf("\n");
       }

       for(int i=0;i<=n;i++)
            g[i].clear();
    }


    return 0;
}



