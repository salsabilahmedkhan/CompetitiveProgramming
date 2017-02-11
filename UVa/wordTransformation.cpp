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

char a[300][20],b[50],s1[50],s2[50];
int dis[300];
vector <int> g[300];

void bfs(int s,int des)
{
    queue <int> q;
    int visit[300]={0};
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

int diff(char *dic1, char *dic2)
{
    int len1,len2,c=0;
    len1=strlen(dic1);
    len2=strlen(dic2);
    if(len1!=len2)
        return (-1);
    else
    {
        for(int i=0;i<len1;i++)
            if(dic1[i]!=dic2[i])
                c++;

        return c;
    }

}

int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        i=0;
        while(scanf("%s",a[i])!=EOF)
        {
            if(strcmp(a[i],"*")==0)
                break;
            i++;
        }
        for(int j=0;j<i;j++)
        {
            for(int k=j;k<i;k++)
            {
                if(diff(a[j],a[k])==1)
                {
                    g[j].pb(k);
                    g[k].pb(j);
                }

            }
        }
        if(t>0)
            printf("\n");
        t++;

        getchar();
        while(gets(b))
        {
            if(!strlen(b))
                break;
            sscanf(b,"%s %s",s1,s2);
            int l,m;

            for(l=0;l<i;l++)
                if(strcmp(a[l],s1)==0)
                    break;
            for(m=0;m<i;m++)
                if(strcmp(a[m],s2)==0)
                    break;
            bfs(l,m);
            printf("%s %s %d\n",s1,s2,dis[m]);
        }

        for(int j=0;j<=i;j++)
            g[j].clear();
    }

    return 0;
}



