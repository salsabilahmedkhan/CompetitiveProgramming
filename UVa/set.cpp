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
    char a;
    int t;
    scanf("%c",&a);
    //for(int i=0;a[i];i++)
        if(toupper(a))
            t=1;
        else
            t=0;
    cout<<t<<endl;
    printf("%c",a);
    cout<<toupper('a');

    return 0;
}



