#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <algorithm>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <map>

using namespace std;

#define ll long long
#define pi acos(-1.0)
#define eps 1e-9

int main()
{
    map<string, int> m;
    map<string, int>::iterator it;
    int tc, l, i;
    double d;
    char a[100];
    cin>>tc;
    getchar();
    getchar();
    for(i=1; i<=tc; i++) {
        int c=0;
        while(gets(a)) {
            l=strlen(a);
            if(i<tc && l==0)
                break;
            if(m.find(a)==m.end())
                m[a]=1;
            else
                m[a]=m[a]+1;
            c++;
        }
        for(it=m.begin(); it!=m.end(); it++) {
            d=(*it).second;
            cout<<(*it).first;
            printf(" %0.4lf\n", (d*100)/double(c));
        }
        if(i<tc)
            printf("\n");
        m.clear();
    }
    return 0;
}

