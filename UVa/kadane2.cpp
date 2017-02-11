#include <cstdio>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>

using namespace std;

#define PI 3.141592653589793
#define MAX 2000000000

typedef long long int lld;


int main()
{
    int a[100],n,i,max,prev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    prev=0;
    max=0;
    for(i=0;i<n;i++)
    {
        if(prev>0)
            prev=prev+a[i];
        else
            prev=a[i];

        if(prev>max)
            max=prev;
    }
    printf("%d\n",max);

    return 0;
}





