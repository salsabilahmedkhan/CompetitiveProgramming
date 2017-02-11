
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
    char a[150],b[100];
    int len,sum,i,j,p,k;
    while(gets(a))
    {
        len=strlen(a);
        for(i=0;i<len;i=p+1)
        {
            if(a[i]=='!')
            {
                printf("\n");
                p=i;
            }

           else if(isdigit(a[i]))
            {
                sum=0;
                for(j=i;;j++)
                {
                    if(!isdigit(a[j]))
                    {
                        p=j;
                        break;
                    }

                    sum=sum+a[j]-'0';
                }
                for(k=1;k<=sum;k++)
                {
                    if(a[j]=='b')
                     printf(" ");
                    else
                        printf("%c",a[j]);
                }
            }
        }
        printf("\n");

    }


    return 0;
}


