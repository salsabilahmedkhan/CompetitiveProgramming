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

char a[26000][50],b[50],s1[50],s2[50],track[26000];
int f,visit[26000],y,c,par[25145];
vector <int> g[26000];
map <string,int> m;
vector <string> vs;

void bfs(int s,int des)
{

    queue <int> q;
    mem(visit,0);
    mem(par,0);
    q.push(s);

    visit[s]=1;
    f=0;
    if(s==des)
        f=1;
    while(!q.empty())
    {

        int u=q.front();
        int lu=strlen(a[u]);
        q.pop();
        for(int v=0;v<y;v++)
        {

            int lv=strlen(a[v]);
            if(lu==lv)
            {

                c=0;
                for(int i=0 ; i<lu ; i++)
                {
                    if( a[u][i]!=a[v][i])
                        c++;
                }
            }
            if(c==1 && !visit[v])
            {

                visit[v]=1;
                q.push(v);
                par[v]=u;

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

}
void print(int u,int v)
{
    mem(track,0);
    if(!f)
        printf("No solution.\n");
    else
    {
        int uff,p=0;
        uff=v;
        while(1)
        {
            track[p++]=uff;
            if(uff==u)
                break;
            uff=par[uff];
        }
        for(int i=p-1 ; i>=0 ; i--)
            printf("%s\n", a[ track[i] ]);
    }
}

int main()
{

        y=0;
        while(gets(a[y]))
        {
            if(!strlen(a[y]))
                break;
            m[a[y]]=y;
            y++;
        }

        int t=0;
        while(scanf("%s %s",s1,s2)!=EOF)
        {
            if(t>0)
                printf("\n");
            t++;
            bfs(m[s1],m[s2]);
            print(m[s1],m[s2]);

        }

    return 0;
}





