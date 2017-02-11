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
    string a,temp1,temp2;
    vector <string> v;
    while(cin>>a)
    {
        v.pb(a);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i].size()==1)
            continue;
        for(int j=1;j<v[i].size();j++)
        {
            temp1=v[i].substr(0,j);
            temp2=v[i].substr(j,v[i].size()-1);
            if(binary_search(v.begin(),v.end(),temp1) && binary_search(v.begin(),v.end(),temp2))
            {
                printf("%s\n",v[i].c_str());
                break;
            }
        }
    }


    return 0;
}



