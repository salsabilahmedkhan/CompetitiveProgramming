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

map <string,int> mp;
int par[6000],c,r;;
char s1[50],s2[50];

int find_par(int r)
{
    if(par[r]==r)
        return r;
    else
        return par[r]=find_par(par[r]);
}

void make_union(int a,int b)
{
    int u=find_par(a);
    int v=find_par(b);

    if(u==v)
        return;
    else
    {
        par[u]=v;
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    while(scanf("%d %d",&c,&r)!=EOF)
    {
        if(!c && !r)
            break;
        //cout<<c<<" "<<r<<endl;
        mem(par,0);

        for(int i=0;i<c;i++)
        {
            scanf("%s",s1);
            mp[s1]=i;
            par[i]=i;
            //cout<<s1<<" "<<mp[s1]<<endl;
        }
        for(int i=1;i<=r;i++)
        {
            scanf("%s %s",s1,s2);
           // cout<<s1<<" "<<s2<<endl;
            make_union(mp[s1],mp[s2]);
        }

        for(int i=0;i<c;i++)
            par[i]=find_par(i);

        sort(par,par+c);
        int counter=1,max=0;

        /*for(int i=0;i<c;i++)
            cout<<par[i]<<" ";
        cout<<endl;*/

        for(int i=1;i<c;i++)
        {
            if(par[i] == par[i-1])
                counter++;
            else
            {
                if(counter > max)
                    max=counter;
                counter=1;
            }
        }
        if(counter > max)
            max=counter;

        printf("%d\n",max);

    }

    return 0;
}



