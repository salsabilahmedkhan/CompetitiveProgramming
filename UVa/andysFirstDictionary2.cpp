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
    char a,b[205];
    int i=0;
    set <string> s;
    set <string> :: iterator it;
    while(scanf("%c",&a)!=EOF)
    {

        if(isalpha(a))
        {
            a=tolower(a);
            b[i++]=a;
        }
        else
        {
            b[i]=0;
            if(strlen(b))
                s.insert(b);
            i=0;
        }

    }
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;

    return 0;
}



