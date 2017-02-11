
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
    char a[1001][20],b[20],c[10];
    int i=0,j,k,l,l1,l2,flag,g,count,m,n;
    while(gets(a[i]))
    {
        if(strcmp(a[i],"#")==0)
            break;

        i++;
    }

    while(gets(b))
    {
        if(strcmp(b,"#")==0)
            break;

        flag=0,count=0;

        l2=strlen(b);
        for(j=0;j<i;j++)
        {
            l1=strlen(a[j]);
            l=0;
            for(n=0;n<l2;n++)
            {
                if(isalpha(b[n]))
                    c[l++]=b[n];
            }
            c[l]=0;
            if(l<l1)
            {
                continue;
            }
            else
            {
                g=0;
                for(k=0;k<l1;k++)
                {
                    for(m=0;m<l;m++)
                    {
                        if(a[j][k]==c[m])
                        {
                            c[m]='.';
                            g++;
                            break;
                        }
                    }
                }
                if(g==l1)
                    count++;
            }
        }

        printf("%d\n",count);
    }

    return 0;
}


