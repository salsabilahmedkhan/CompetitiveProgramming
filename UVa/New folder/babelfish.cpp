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
    map<string,string> m;
    char a[30], b[30], c[30], g[100];
    int l;
    while(gets(g)) {
        l=strlen(g);
        if(l==0)
            break;
        sscanf(g, "%s %s", a, b);
        m[b]=a;
    }
    while(scanf("%s", c)!=EOF) {
        if(m.find(c)==m.end())
            cout<<"eh"<<endl;
        else
            cout<<m[c]<<endl;
    }
    return 0;
}

