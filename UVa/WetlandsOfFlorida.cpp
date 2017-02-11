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

char a[105][105];
int visit[105][105],i,len,c;

int dx [] = {-1, 0, 1, 0, -1, 1, 1, -1};
int dy [] = {0, 1, 0, -1, 1, 1, -1, -1};

void bfs(int s1,int s2)
{
    memset(visit,0,sizeof(visit));

    queue <int> qx;
    queue <int> qy;
    visit[s1][s2]=1;


    qx.push(s1);
    qy.push(s2);
    c=1;
    while(!qx.empty())
    {
        int u1=qx.front();
        int u2=qy.front();
        qx.pop();
        qy.pop();

        for(int j=0;j<8;j++)
        {
            int v1=u1+dx[j];
            int v2=u2+dy[j];
            //cout<<"shit"<<endl;
            if(v1<0 || v1>=i) continue;
            if(v2<0 || v2>=len) continue;

            if(a[v1][v2]=='W' && !visit[v1][v2])
            {
                visit[v1][v2]=1;
                //cout<<v1<<v2<<a[v1][v2]<<endl;
                qx.push(v1);
                qy.push(v2);
                c++;
            }
        }
    }
}

int main()
{
    int t,s1,s2,bl=0;
    char b[150];
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        mem(a,0);
        i=0;
        if(bl>0)
            printf("\n");
        bl++;
        while(gets(b) && strlen(b))
        {
            if(isalpha(b[0]))
            {
                len=strlen(b);
                strcpy(a[i++],b);
            }
            else
            {
                sscanf(b,"%d %d",&s1,&s2);
                //cout<<s1<<s2<<endl;
                bfs(s1-1,s2-1);
                printf("%d\n",c);
            }

        }
    }


    return 0;
}



