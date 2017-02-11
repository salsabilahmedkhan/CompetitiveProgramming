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

map <string,int> m;
int par[100005];

int find_rep(int r)
{
    if(par[r]==r)
        return r;
    else
        return par[r]=find_rep(par[r]);
}

void make_union(int a,int b)
{
    int u=find_rep(a);
    int v=find_rep(b);

    if(u!=v)
        par[v]=u;
}

int main()
{
    freopen("in.txt","r",stdin);
    int t,f;
    s1d(t);
    char s1[30],s2[30];

    while(t--)
    {
        for(int i=1;i<=50005;i++)
            par[i]=i;
        m.clear();
        s1d(f);
        int k=0;
        while(f--)
        {
            scanf("%s %s",s1,s2);

            if(m.find(s1)==m.end())
                m[s1]=++k;
            if(m.find(s2)==m.end())
                m[s2]=++k;

            cout<<s1<<" : "<<m[s1]<<endl<<s2<<" : "<<m[s2]<<endl;

            make_union(m[s1],m[s2]);

            int parent = par[m[s2]];

            int ans=0;

            cout<<"parent: "<<parent<<endl;
            for(int i=1;i<=k;i++)
            {
                cout<<"parent -> "<<i<<" : "<<par[i]<<endl;
            }


            for(int i=1;i<=k;i++)
                if(par[i]==parent)
                    ans++;

            p1d(ans);
        }
        printf("\n");

    }


    return 0;
}



