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
    int n,q,n1[10005],q1,j=0;
    map <int,int> m;
    map <int,int> ::iterator it;
    while(scanf("%d %d",&n,&q)!=EOF)
    {
        j++;
        memset(n1,0,sizeof(n1));
        if(n==0 && q==0)
            break;
        for(int i=0;i<n;i++)
            scanf("%d",&n1[i]);

        sort(n1,n1+n);

        for(int i=0;i<n;i++)
        {
            //cout<<n1[i]<<" "<<i<<endl;
            if(m.find(n1[i])==m.end())
                m[n1[i]]=i+1;
            else
                continue;
        }
        /*for(it=m.begin();it!=m.end();it++)
        {
            cout<<(*it).first<<" "<<(*it).second<<endl;
        }*/
        printf("CASE# %d:\n",j);
        while(q--)
        {
            scanf("%d",&q1);
            if(m.find(q1)==m.end())
                printf("%d not found\n",q1);
            else
                printf("%d found at %d\n",q1,m[q1]);
        }
        m.clear();
    }

    return 0;
}



