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
    int m1,n,b;
    char a[20],c[1000];
    map <string,int> m;
    map <string,int> ::iterator it;
    scanf("%d %d",&m1,&n);
    while(m1--)
    {
        scanf("%s %d",a,&b);
        m[a]=b;
    }

    while(n--)
    {
        int sum=0;
        while(scanf("%s",c)!=EOF)
        {
            if(strcmp(c,".")==0)
                break;
            if(m.find(c)!=m.end())
                sum=sum+m[c];
            else
                continue;
        }

        printf("%d\n",sum);
    }


    return 0;
}



