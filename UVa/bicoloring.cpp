#include <cstdio>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <map>
#include <utility>

using namespace std;

#define PI 3.141592653589793
#define MAX 2000000000
#define pb push_back

typedef long long int lld;

int g[205][205],n,l,cost[205];

bool bfs(int s)
{
    int u,v;
    queue <int> q;
    for(int i=0;i<n;i++)
        cost[i]=-1;

    cost[s]=1;
    q.push(s);

    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(v=0;v<n;v++)
        {
            if(g[u][v]==1 && cost[v]==-1)
            {
                cost[v]=1-cost[u];
                q.push(v);
            }

            else if(g[u][v]==1 && cost[v]==cost[u])
                return false;
        }
    }

    return true;
}


int main()
{
    int a,b;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        memset(g,0,sizeof(g));

       scanf("%d",&l);

        for(int i=0;i<l;i++)
        {
            scanf("%d %d",&a,&b);
            g[a][b]=g[b][a]=1;
        }

        int c=bfs(0);

        if(c==0)
            printf("NOT BICOLORABLE.\n");
        else
            printf("BICOLORABLE.\n");

    }

    return 0;
}



