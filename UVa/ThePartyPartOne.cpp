#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

int n,m,g[1001][1001];
int visit[1001],cost[1001];

void bfs(int s)
{
    memset(visit,0,sizeof(visit));
    memset(cost,0,sizeof(cost));
    int u,v,i,j;
    queue <int> q;
    visit[s]=1;
    cost[s]=0;
    q.push(s);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(v=0;v<n;v++)
        {
            if(g[u][v]==1 && visit[v]==0)
            {
                visit[v]=1;
                cost[v]=cost[u]+1;
                q.push(v);
            }
        }

    }

    for(i=1;i<n;i++)
            printf("%d\n",cost[i]);

    return;

}


int main()
{
    int t,i,j,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&m);
        memset(g,0,sizeof(g));
        for(j=0;j<m;j++)
        {
            scanf("%d %d",&a,&b);
            g[a][b]=1;
            g[b][a]=1;
        }
        bfs(0);
        if(i<t)
            printf("\n");
    }


    return 0;
}


