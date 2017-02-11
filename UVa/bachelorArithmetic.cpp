
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
    long long int b,s,i;
    double p1,p2;
    while(scanf("%lld %lld",&b,&s)!=EOF)
    {
        if(b==0 && s==0)
            break;


        p1=(double)s/(double)b;
        p2=(double)(s-1)/(double)(b-1);
        if(p1>1)
            p1=1;
        if(p2>1)
            p2=1;

        if(b==1 || b==0)
            printf(":-\\\n");

        else if(p2>p1)
            printf(":-)\n");
        else if(p2<p1)
            printf(":-(\n");
        else if(p1==p2)
            printf(":-|\n");
    }



    return 0;
}

