#include <cstdio>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <map>
#include <utility>

using namespace std;

#define PI 3.141592653589793
#define MAX 2000000000
#define pb push_back

typedef long long int lld;


int main()
{
    char a[30],b[30],c[30],dic[300];

    map <string,string> m;
    while(gets(dic))
    {
        if(!strlen(dic))
            break;
        sscanf(dic,"%s %s",a,b);
        m[b]=a;
    }

    while(scanf("%s",c)!=EOF)
    {
        if(m.find(c)==m.end())
            printf("eh\n");
        else
            cout<<m[c]<<endl;
    }


    return 0;
}



