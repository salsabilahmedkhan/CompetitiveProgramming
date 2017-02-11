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
#include <sstream>

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

#define s1d(a) scanf("%d", &a)
#define s2d(a,b) scanf("%d %d",&a,&b)
#define s1ll(a) scanf("%lld", &a)
#define s2ll(a,b) scanf("%lld %lld",&a,&b)
#define s1f(a) scanf("%lf",&a)
#define s2f(a,b) scanf("%lf %lf",&a,&b)
#define p1d(a) printf("%d\n",a)
#define p2d(a,b) printf("%d %d\n",a,b)
#define p1ll(a) printf("%lld\n",a)
#define p2ll(a,b) printf("%lld %lld\n",a,b)
#define p1f(a) printf("%lf\n",a)
#define p2f(a,b) printf("%lf %lf\n",a,b)

typedef long long int lld;
typedef unsigned int ui;

int dirx [] = {-1, 0, 1, 0, -1, 1, 1, -1};
int diry [] = {0, 1, 0, -1, 1, 1, -1, -1};

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

vector <int> g[105],art,v;
int color[105],low[105],t,f[105],d[105],n,e,cnt,cnt2;
char input[1005];
map <int,int> mp;

void dfs_visit(int u)
{
    color[u]=2;
    t=t+1;
    d[u]=t;
    low[u]=d[u];

    for(int i=0;i<g[u].size();i++)
    {
        int v=g[u][i];
        if(color[v]==1)
        {
            if(u==1)
                cnt2++;
            dfs_visit(v);
            //cout<<"?"<<endl;
            if(low[v]>=d[u] && u!=1)
            {
                if(mp.find(u)==mp.end())
                {
                    cnt++;
                    mp[u]=cnt;
                    art.pb(u);
                }
            }

            if(low[v]<low[u])
                low[u]=low[v];
        }
        else if(color[v]==2)
        {
            if(d[v]<low[u])
                low[u]=d[v];
        }

    }

    color[u]=3;
    t=t+1;
    f[u]=t;
}

void dfs()
{
    for(int i=1;i<=n;i++)
    {
        color[i]=1;
        low[i]=0x3f;
    }

    t=0;

    for(int i=1;i<=n;i++)
        if(color[i]==1)
            dfs_visit(i);
}

int main()
{
    int i;
    //freopen("in.txt","r",stdin);
    while(cin>>n)
    {
        if(!n)
            break;
        int a,b;
        mp.clear();
        getchar();

        while(gets(input))
        {

            if(strcmp(input,"0")==0)
                break;

            stringstream ss(input);

            while(ss>>b)
            {
                v.pb(b);
            }
            a=v[0];
            /*for(int i=1;i<v.size();i++)
            {
                cout<<a<<"->"<<v[i]<<endl;
            }*/
            for(int i=1;i<v.size();i++)
            {

                g[a].pb(v[i]);
                g[v[i]].pb(a);
            }
            ss.clear();
            v.clear();
        }
        //for(int i=0;i<=n;i++)
          //  cout<<g[i].size()<<endl;
        cnt = 0;
        cnt2=0;
        dfs();
        if(cnt2>1)
            cnt++,art.pb(1);
        cout<<cnt<<endl;
        //for(int i=0;i<art.size();i++)
          //  cout<<"art: "<<art[i]<<endl;
        for(int i=0;i<=n;i++)
            g[i].clear();
        art.clear();
        mem(color,0);
        mem(d,0);
        mem(f,0);
    }


    return 0;
}




