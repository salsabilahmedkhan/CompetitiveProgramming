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
#define eps 1e-10
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

int dirx [] = {-1, 0, 1, 0, -1, 1, 1, -1};
int diry [] = {0, 1, 0, -1, 1, 1, -1, -1};

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

char g[35][85];
int vis[35][85],len,c,x,y,max,i;
vector <char> v;
vector <int>vx,vy;

void bfs(char c,int s1,int s2)
{
    //mem(vis,0);

    queue <int> qx;
    queue <int> qy;
    vis[s1][s2]=1;
    g[s1][s2]=c;
    qx.push(s1);
    qy.push(s2);

    while(!qx.empty())
    {
        int u1=qx.front();
        int u2=qy.front();
        qx.pop();
        qy.pop();

        for(int i=0;i<4;i++)
        {
            int v1=u1+dx[i];
            int v2=u2+dy[i];

            //if(v1<0 || v1>=i) continue;
            //if(v2<0 || v2>max) continue;

            if(g[v1][v2]==' ' && !vis[v1][v2])
            {
                vis[v1][v2]=1;
                g[v1][v2]=c;
                qx.push(v1);
                qy.push(v2);
            }
        }
    }
}


int main()
{
    int t;
    //scanf("%d",&t);
    //getchar();
    i=0;
    while(gets(g[i++]))
    {
        //mem(g,0);
        //mem(vis,0);
        //i=0;

        while(gets(g[i]))
        {
            c=0;
            len=strlen(g[i]);
            if(g[i][0]=='_')
                break;
            for(int j=0;j<len;j++)
            {
                if(g[i][j]!='X' && g[i][j]!=' ')
                {
                    v.pb(g[i][j]);
                    vx.pb(i);
                    vy.pb(j);
                }
            }
            i++;
        }
        for(int j=0;j<v.size();j++)
        {
            bfs(v[j],vx[j],vy[j]);
        }
        for(int l=0;l<=i;l++)
        {
            printf("%s\n",g[l]);
        }
        vx.clear();
        vy.clear();
        v.clear();
        mem(g,0);
        mem(vis,0);
        i=0;
    }

    return 0;
}




