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

typedef long long int lld;

int main()
{
    map <int,int> m;
    map <int,int> :: iterator it;
    int n,n1[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&n1[i]);
        m[n1[i]]=i;
    }

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<endl;
    }


    return 0;
}



