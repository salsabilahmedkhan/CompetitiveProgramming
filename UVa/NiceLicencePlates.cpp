
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
        for(j=0;j<26;j++)
        {
            b[j]='A'+j;
        }
        for(j=0,l=2;j<3;j++,l--)
        {
            for(k=0;k<26;k++)
            {
                if(a[j]==b[k])
                {
                    printf("%c %c\n",a[j],b[k]);
                    printf("L=%d,K=%d\n",l,k);
                    printf("POW=%d\n",pow(26,l));
                    sum=sum+k*pow(26,l);
                    printf("sum=%d\n",sum);
                }

            }
        }
        printf("%d\n",sum);
        for(j=4;j<8;j++)
        {
            sum1=sum1*10+a[j]-'0';
        }
        printf("%d\n",sum1);
        diff=sum-sum1;
        if(diff<0)
            diff=diff*(-1);
        printf("%d\n",diff);
        if(diff<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }

    return 0;
}


