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

int dirx [] = {-1, 0, 1, 0, -1, 1, 1, -1};
int diry [] = {0, 1, 0, -1, 1, 1, -1, -1};

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

int visit[30][30],n;
char g[30][30];

void bfs(int s1,int s2)
{
    queue <int> qx,qy;
    qx.push(s1);
    qy.push(s2);

    visit[s1][s2]=1;
    while(!qx.empty())
    {
        int u1=qx.front();
        int u2=qy.front();
        qx.pop();
        qy.pop();
        for(int i=0;i<8;i++)
        {
            int v1=u1+dirx[i];
            int v2=u2+diry[i];

            if(v1<0 || v1>=n)
                continue;
            if(v2<0 || v2>=n)
                continue;

            if(g[v1][v2]=='1' && !visit[v1][v2])
            {
                visit[v1][v2]=1;
                qx.push(v1);
                qy.push(v2);
            }
        }
    }
}

int main()
{
    int t=0;
    while(scanf("%d",&n)!=EOF)
    {
        t++;
        mem(g,0);
        mem(visit,0);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>g[i][j];
                //cout<<g[i][j]<<endl;
            }
        }
        //cout<<"blah"<<endl;
        int c=0;
        for(int i=0;i<n;i++)
        {
           // cout<<"shit1"<<endl;
            for(int j=0;j<n;j++)
            {
             //   cout<<"shit2"<<endl;
                if(g[i][j]=='1' && !visit[i][j])
                    bfs(i,j),c++;
            }
        }

        printf("Image number %d contains %d war eagles.\n",t,c);

    }

    return 0;
}



