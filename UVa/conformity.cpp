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

int main()
{
    int n,i,a[10];
    char s[20];
    string s1;
    map <string,int> m;
    map <string,int> :: iterator it;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        while(n--)
        {
            rep(i,5)
                scanf("%d",&a[i]);
            sort(a,a+5);
            sprintf(s,"%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4]);
            s1=s;
            if(m.find(s1)==m.end())
                m[s1]=1;
            else
                m[s1]++;
        }
        int max=-1,frosh=0;
        for(it=m.begin();it!=m.end();it++)
        {
            if((*it).second>max)
                max=(*it).second,frosh=0;
            if((*it).second==max)
                frosh+=max;
        }

        printf("%d\n",frosh);
        m.clear();
    }



    return 0;
}



