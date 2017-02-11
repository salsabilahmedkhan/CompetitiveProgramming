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
    char a[100],b[100];
    set <string> s;
    set <string> :: iterator it;
    while(scanf("%s",a)!=EOF)
    {
        int len=strlen(a);
        int j=0;

        for(int i=0;i<len;i++)
            if(isalpha(a[i]))
                b[j++]=a[i];

        b[j]=0;

        for(int i=0;i<j;i++)
            b[i]=tolower(b[i]);
        printf("%s",b);
        s.insert(b);
    }
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;

    return 0;
}
