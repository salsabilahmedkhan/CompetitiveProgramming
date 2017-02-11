#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

vector <int> salsabil[10001];
int visit[10001],n,m;

void bfs(int s)
{
    int i,j,u,v;
    queue <int> q;
    visit[s]=1;
    q.push(s);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<salsabil[u].size();i++)
        {
            v=salsabil[u][i];
            if(!visit[v])
            {
                visit[v]=1;
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
        memset(visit,0,sizeof(visit));
        scanf("%d %d %d",&n,&m,&l);
        for(i=0;i<=n;i++) salsabil[i].clear();
        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a ,&b);
            salsabil[a].push_back(b);
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
