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
#include <utility>

using namespace std;

#define PI 3.141592653589793
#define pi acos(-1.0)
#define MAX 2000000000
#define pb push_back

typedef long long int lld;


int main()
{
    int t,i;
    char a[100];
    double c,p;
    map <string,int> m;
    map <string,int>:: iterator it;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++)
    {
        c=0;
        while(gets(a))
        {
            int l=strlen(a);
            if(!l)
                break;
            if(m.find(a)==m.end())
                m[a]=1;
            else
                m[a]=m[a]+1;
            c++;
        }

        for(it=m.begin();it!=m.end();it++)
        {
            p=(*it).second;
            cout<<(*it).first;
            printf(" %.4lf\n",(p*100)/c);
        }
        if(i<t)
            printf("\n");
        m.clear();
    }


    return 0;
}



