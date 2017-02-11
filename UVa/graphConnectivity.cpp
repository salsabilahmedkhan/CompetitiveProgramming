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

vector <int> g[30];
int visit[30];

void bfs(int s)
{
    queue <int> q;
    visit[s]=1;
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
    int t,nl=0;
    char c[5];
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        mem(visit,0);
        char n;
        scanf("%c",&n);
        getchar();
        int node=n-'A'+1;

        while(gets(c))
        {
            int len=strlen(c);
            if(!len)
                break;

            int a=c[0]-'A'+1;
            int b=c[1]-'A'+1;

            g[a].pb(b);
            g[b].pb(a);
        }

        int count=0;

        for(int i=1;i<=node;i++)
        {
            if(!visit[i])
                bfs(i),count++;
            else
                continue;
        }
        if(nl>0)
            printf("\n");
        nl++;
        cout<<count<<endl;
        for(int i=0;i<=node;i++)
            g[i].clear();
    }


    return 0;
}



