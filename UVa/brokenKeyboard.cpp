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
    char a[100005];
    list <char> l;
    list <char> :: iterator it;
    while(scanf("%s",a)!=EOF)
    {
        int len=strlen(a);
        it=l.end();
        for(int i=0;i<len;i++)
        {
            if(a[i]=='[')
                it=l.begin();
            else if(a[i]==']')
                it=l.end();
            else
                l.insert(it,a[i]);

        }
        for(it=l.begin();it!=l.end();it++)
            cout<<*it;

        cout<<endl;
        l.clear();
    }



    return 0;
}



