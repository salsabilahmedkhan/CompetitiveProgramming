
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

#define PI 3.141592653589793
#define MAX 2000000000

typedef long long int lld;

int p[100005];

void isprime()
{
    int i,x,j;
    x=sqrt(100000);
    p[0]=p[1]=1;
    for(i=4;i<=100000;i+=2)
        p[i]=1;
    for(i=3;i<=x;i++)
    {
        if(p[i]==0)
        {
            for(j=i+i;j<=100000;j+=i)
            {
                p[j]=1;
            }
        }
    }
}



int main()
{
    char a[300];
    int i,j,prime;
    isprime();
    while(scanf("%s",a)!=EOF)
    {
        if(strcmp(a,"0")==0)
            break;
        int len=strlen(a);
        int number,prime=0,max=0;
        for(i=0;i<len;i++)
        {
            number=0;
            for(j=i;j<len;j++)
            {
                number=number*10+a[j]-'0';
                if(number>100000)
                    break;

                if(p[number]==0)
                    prime=number;

                if(prime>max)
                    max=prime;

            }
        }
        printf("%d\n",max);
    }


    return 0;
}


