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
    int n,i,p;
    char a[1000],b[1000],c[1000];
    map< string,string > m;
    string s1,s2,s3;
    m.clear();

    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        gets(a);
        s1=a;
        gets(b);
        s2=b;
        m[s1]=s2;
    }
    scanf("%d",&p);
    getchar();
    for(i=0;i<p;i++){
        gets(c);
        s3=c;
        cout<<m[s3]<<endl;
    }


    return 0;
}


