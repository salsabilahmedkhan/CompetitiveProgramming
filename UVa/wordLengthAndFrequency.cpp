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
    int i=0,c=0,l;
    map <int,int> m;
    map <int,int> :: iterator it;
    while(cin>>a)
    {
        if(isalpha(a))
            b[i++]=a;
        while(scanf("%c",&a)!=EOF)
        {
            if(a=='#')
                break;

            if(isalpha(a))
            {
                a=tolower(a);
                if(i)
                {
                    if(b[i-1]=='-')
                        i--;
                }
                b[i++]=a;
                c++;
            }
            else if(a=='-')
            {
                b[i++]=a;
            }
            else if(a=='\n')
            {
                if(b[i-1]=='-')
                    continue;
                else
                {
                    b[i]=0;
                    //cout<<b<<endl;
                    l=strlen(b);
                    if(l)
                    {
                        if(m.find(l)==m.end())
                            m[l]=1;
                        else
                            m[l]=m[l]+1;
                    }
                    i=0;
                }
            }

            else if(a=='\'')
                continue;

            else
            {
                b[i]=0;
                //cout<<b<<endl;
                l=strlen(b);
                if(l)
                {
                    if(m.find(l)==m.end())
                        m[l]=1;
                    else
                        m[l]=m[l]+1;
                }
                i=0;
            }

        }
        for(it=m.begin();it!=m.end();it++)
            cout<<(*it).first<<" "<<(*it).second<<endl;
        m.clear();
        cout<<endl;


    }

    return 0;
}




