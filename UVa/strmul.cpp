#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;
char a[1000],c[1000];

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
    for(i=len-1;i>=0;i--)
    {
        m=(a[i]-'0')*b+carry;
        c[k]=m%10+'0';
        //printf("c[%d]=%c\n",k,c[k]);
        carry=m/10;
        k++;
    }
    while(carry)
    {
        c[k++]=carry%10+'0';
        carry=carry/10;
    }
    c[k]=0;
    printf("%s\n",c);
    len2=strlen(c);
    StrRev(c,len2);
    return;
}


int main()
{
    int b;
    scanf("%s %d",a,&b);
    StrMul(a,b,c);

    return 0;
}


