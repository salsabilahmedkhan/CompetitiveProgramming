
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;


int main()
{
    long long int t,c,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&c);
        n=-1+sqrt(1+4*2*c);
        n=n/2;
        printf("%lld\n",n);

    }


    return 0;
}


