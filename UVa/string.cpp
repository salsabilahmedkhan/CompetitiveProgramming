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
#include <utility>

using namespace std;

#define PI 3.141592653589793
#define pi acos(-1.0)
#define MAX 2000000000
#define pb push_back

typedef long long int lld;


int main()
{
    string a,b,c;
    a="salsabil is roll 11.";
    b=a;
    c=a+b;
    cout<<c<<endl;
    printf("%s\n",c.c_str());
    cout<<c.size()<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<c<<endl;
    for(int i=0;i<c.size();i++)
        cout<<c[i]<<" ";
    cout<<endl;


    return 0;
}



