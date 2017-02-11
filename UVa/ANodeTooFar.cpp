
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

int g[50][50],nc,val,visit[50],cost[50],map[50],in,ttl;

void bfs(int s)
{
    //printf("%d\n",s);
    memset(visit,0,sizeof(visit));

    int i,j,u,v;
    for(i=0;i<val;i++)
        cost[i]=50;
    queue <int> q;
    visit[s]=1;
    cost[s]=0;
    q.push(s);
    while(!q.empty())
    {
        u=q.front();
      //  printf("%d\n",u);
        q.pop();
        for(v=0;v<val;v++)
        {
            if(g[u][v]==1 && visit[v]==0)
            {
                visit[v]=1;
                cost[v]=cost[u]+1;
        //        printf("%d ",cost[v]);
                q.push(v);
            }
        }
    }

    return;
}
int main()
{
    int i,a,b,c=0,c1,j,k,l;
    while(scanf("%d",&nc)!=EOF)
    {
        if(nc==0)
            break;

        memset(g,0,sizeof(g));

        val=0;
        for(i=0;i<nc;i++)
        {
            scanf("%d %d",&a,&b);

            for(j=0;j<val;j++)
                if(map[j]==a)
                    break;

            if(j==val)
                map[val++]=a;
            for(j=0;j<val;j++)
                if(map[j]==b)
                    break;

            if(j==val)
                map[val++]=b;
            for(k=0;k<val;k++)
                if(map[k]==a)
                    break;

            for(l=0;l<val;l++)
                if(map[l]==b)
                    break;

            g[l][k]=g[k][l]=1;
        }
        //for(i=0;i<val;i++)
        //{
        //    for(j=0;j<val;j++)
        //    {
        //        printf("%d\n",g[i][j]);
        //    }
        //}

        //for(i=0;i<val;i++)
           // printf("%d ",map[i]);
        while(scanf("%d %d",&in,&ttl)!=EOF)
        {
            c1=0;
            if(in==0 && ttl==0)
                break;
                c++;
            for(i=0;i<val;i++)
                if(map[i]==in)
                    break;
            //printf("%d\n",i);
            bfs(i);
            for(j=0;j<val;j++)
                if(cost[j]>ttl)
                    c1++;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",c,c1,in,ttl);
        }
    }


    return 0;
}


