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

char c2[10005];

int main()
{
    int t,k,cost,m;
    char c1;
    map <char,int> mci;
    map <char,int> :: iterator it;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d\n",&k);
        while(k--)
        {
            gets(c2);
            sscanf(c2,"%c %d",&c1,&cost);
            mci[c1]=cost;
        }
        scanf("%d\n",&m);
        lld sum=0;
        while(m--)
        {
            gets(c2);
            for(int i=0;c2[i];i++)
            {
                if(mci.find(c2[i])==mci.end())
                    continue;
                else
                    sum=sum+mci[c2[i]];
            }
        }
        double ans=(double)sum/100;
        printf("%.2lf$\n",ans);
        mci.clear();

    }


    return 0;
}



