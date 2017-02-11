// :p

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

char highway[2000005];

int main()
{
    int l,dis,count,flag,first;
    char prev;

    while(scanf("%d",&l) != EOF)
    {
        if(!l)
        break;

        flag=0;
        scanf("%s",highway);

        for(int i=0;i<l;i++)
        {
            if(flag)
                continue;
            if(highway[i]=='Z' || highway[i]=='R' || highway[i]=='D')
            {
                flag=1;
                first=i;
            }
        }

        //cout<<first<<endl;
        count=0;
        dis=2000005;
        prev=highway[first];
        if(prev=='Z')
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=first+1;i<l;i++)
        {
          //  cout<<dis<<" "<<count<<endl;
            if(highway[i]=='Z')
            {
                dis=0;
                break;
            }
            else if(highway[i]=='R' || highway[i]=='D' )
            {
                if(highway[i]!=prev)
                {
                    count++;
                    if(count<dis)
                        dis=count;
                    count=0;
                    prev=highway[i];
                }

                else
                {
                    count=0;
                    continue;
                }
            }
            else
                count++;
        }

        printf("%d\n",dis);
    }

    return 0;
}



