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
    int n,q;
    char a[200],b[200],c[200];
    string s1,s2,s3;
    map <string,string> m;

    cin>>n;
    cin.get();
    //cin.ignore(100, '\n');
    while(n--)
    {
        getline(cin,s1);
        getline(cin,s2);
    }
    cin>>q;
    //cin.ignore(100, '\n');
    cin.get();
    while(q--)
    {
        getline(cin,s3);
        cout<<m[s3]<<endl;
    }
    return 0;
}



