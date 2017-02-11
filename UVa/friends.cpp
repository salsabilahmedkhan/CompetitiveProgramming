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

int par[30007];

int find_rep(int r)
{
    if(par[r]==r)
        return r;

    else{
       return par[r]=find_rep(par[r]);
    }
}

void make_union(int a,int b)
{
    int u=find_rep(a);
    int v=find_rep(b);

    //cout<<u<<v<<endl;

    if(u==v)
        return;

    else{
        par[u]=v;
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        mem(par,0);
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++)
            par[i]=i;
        while(m--){
            int a,b;
            scanf("%d %d",&a,&b);
            make_union(a,b);
         //   cout<<a<<par[a]<<endl<<b<<par[b]<<endl;
        }

        for(int i=1;i<=n;i++)
            par[i]=find_rep(i);

        sort(par,par+n);
        int counter=1,max=0;
        for(int i=2;i<=n;i++)
        {
            if(par[i]==par[i-1])
                counter++;
            else{
                if(counter>max)
                    max=counter;
                counter=1;
            }

        }

        if(counter>max)
            max=counter;

        cout<<max<<endl;
    }


    return 0;
}



