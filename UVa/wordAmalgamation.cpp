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
#define rep(i,n) for(int i=0;i<(n);i++)
#define repp(i,a,n) for(int i=(a);i<(n);i++)
#define dec(i,n) for(int i=(n);i>0;i--)
#define decc(i,a,n) for(int i=(a);i>(n);i--)
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
#define abs(a) ((a)<0?-(a):(a))
#define sqr(a) ((a)*(a))
#define mem(a,b) memset((a),(b),sizeof(a))

typedef long long int lld;
typedef unsigned int ui;

int main()
{
    char a[105][10],b[10];
    int i=0;
    set <string> s;
    set <string> :: iterator it;
    while(scanf("%s",a[i])!=EOF)
    {
        if(!strcmp(a[i],"XXXXXX"))
            break;
        i++;
    }
    while(scanf("%s",b)!=EOF)
    {
        if(!strcmp(b,"XXXXXX"))
            break;
        int len=strlen(b);
        sort(b,b+len);
        int f=0;
        do
        {
           for(int j=0;j<i;j++)
           {
               if(!strcmp(b,a[j]))
               {
                    f++;
                    s.insert(b);

               }
           }

        }while(next_permutation(b,b+len));
        if(f)
            for(it=s.begin();it!=s.end();it++)
                cout<<*it<<endl;
        else
            printf("NOT A VALID WORD\n");

        printf("******\n");

        s.clear();
    }


    return 0;
}



