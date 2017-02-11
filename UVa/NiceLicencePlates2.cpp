
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
    char a[10],b[30];
    int i,sum,sum1,t,j,k,l,diff;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        sum=0,sum1=0;

        sum=(a[0]-'A')*676+(a[1]-'A')*26+(a[2]-'A');

        for(j=4;j<8;j++)
        {
            sum1=sum1*10+a[j]-'0';
        }

        diff=sum-sum1;
        if(diff<0)
            diff=diff*(-1);

        if(diff<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }

    return 0;
}



