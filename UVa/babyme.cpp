
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
    int t,i,len,p,k,j,s,ss,f,sss;
    double s1,s2,sum;
    char b[100],c[100];
    char a[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
    len=strlen(a);
    f=0;
    s=0;
    s1=0.0;
    s2=0.0;
    for(j=0;j<len;j++)
    {
        if(isdigit(a[j]))
        {
            for(k=j;;k++)
            {
                if(!isdigit(a[k]))
                {
                    f=1;
                    p=k;
                    break;

                }

                s=s*10+a[k]-'0';
            }

        }
        if(f==1)
            break;
    }
    s1=(double)s+s1;
    s1=s1*0.5;
    for(j=p;j<len;j++)
    {
        if(isdigit(a[j]))
        {
            ss=a[j]-'0';
            s2=(double)ss+s2;
            s2=s2*0.05;
            break;
        }
    }

    sum=s1+s2;
    sprintf(b,"%lf",sum);
    len=strlen(b);
    for(j=len-1;j>=0;j--)
    {
        if(b[j]>='1' && b[j]<='9')
        {
            for(k=j;k>=0;k--)
            {
                c[k]=b[k];
            }
            break;
        }

    }
    c[j+1]=0;
    printf("Case %d: %s\n",i,c);
    }

    return 0;
}


