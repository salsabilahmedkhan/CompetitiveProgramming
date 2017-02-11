
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

int g[10001][10001],cost[10001],visit[10001],n,m;


void bfs(int s)
{
    int i,j,u,v;
    queue <int> q;
    memset(visit,0,sizeof(visit));
    memset(cost,0,sizeof(cost));
    visit[s]=1;
    cost[s]=0;
    q.push(s);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(v=1;v<=n;v++)
        {
            if(g[u][v]==1 && visit[v]==0)
            {
                visit[v]=1;
                cost[v]=cost[u]+1;
                q.push(v);

            }
        }
    }

    return;
}


int main()
{
    int l,i,a,b,z,c,t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        c=0;
        memset(g,0,sizeof(g));
        scanf("%d %d %d",&n,&m,&l);
        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a ,&b);
            g[a][b]=1;
        }
        for(i=1;i<=l;i++)
        {
            scanf("%d",&z);
            bfs(z);

        }
        for(i=1;i<=n;i++)
            if(visit[i]==1)
                c++;
        printf("%d\n",c);

    }


    return 0;
}


