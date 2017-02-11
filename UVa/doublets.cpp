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

char a[26000][50],b[50],s1[50],s2[50];
int f,visit[26000];
vector <int> g[26000];
map <string,int> m;
vector <string> vs;

void bfs(int s,int des)
{
    queue <int> q;
    mem(visit,0);
    //mem(dis,0);
    q.push(s);
    //dis[s]=0;
    visit[s]=1;
    f=0;
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
                vs.pb(a[v]);
                if(v==des)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
            break;
    }
    if(f)
    {
        for(int i=0;i<vs.size();i++)
            printf("%s\n",vs[i].c_str());
    }
    else
        printf("No solution.\n");
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

        int y=0;
        while(gets(a[y]))
        {
            if(!strlen(a[y]))
                break;
            m[a[y]]=y;
            y++;
        }
        for(int j=0;j<y;j++)
        {
            for(int k=j;k<y;k++)
            {
                if(diff(a[j],a[k])==1)
                {
                    g[j].pb(k);
                    g[k].pb(j);
                }

            }
        }
        //getchar();
        //getchar();
        int t=0;
        while(gets(b))
        {
            if(!strlen(b))
                break;
            sscanf(b,"%s %s",s1,s2);
            //cout<<s1<<endl;
            if(t>0)
                printf("\n");
            t++;
            vs.pb(s1);
            bfs(m[s1],m[s2]);
        }

        for(int j=0;j<=y;j++)
            g[j].clear();

    return 0;
}




