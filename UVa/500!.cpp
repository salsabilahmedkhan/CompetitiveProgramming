#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

char a[1001][10000];

void StrRev(char *c,int l)
{
    int i;
    for(i=l-1;i>=0;i--)
    {
        printf("%c",c[i]);
    }
    printf("\n");
    return;
}
void StrMul(char *a,int b,char *c)
{
    int i,k=0,carry=0,m,len2;
    int len=strlen(a);
    for(i=0;i<len;i++)
    {
        m=(a[i]-'0')*b+carry;
        c[k]=m%10+'0';

        carry=m/10;
        k++;
    }
    while(carry)
    {
        c[k++]=carry%10+'0';
        carry=carry/10;
    }
    c[k]=0;

    return;
}

int main()
{
    int i,j,n,len;
    while(scanf("%d",&n)!=EOF)
    {
        a[0][0]='1',a[0][1]=0;
        a[1][0]='1',a[1][1]=0;
        for(i=2;i<=n;i++)
        {
            StrMul(a[i-1],i,a[i]);
        }
        printf("%d!\n",n);
        //printf("%s\n",a[n]);
        len=strlen(a[n]);
        StrRev(a[n],len);

    }


    return 0;
}


