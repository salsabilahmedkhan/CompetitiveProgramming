#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;
char a[1000],b[1000],c[1000],d[1000],e[1000];
int dlen;

void StrRev(char *d)
{
    int len,i,j,k,l,f=0;
    len=strlen(d);
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        e[j]=d[i];
    }
    e[j]=0;
    k=strlen(e);
    for(l=0;l<k-1;l++)
    {
        if(e[l]!='0')
            break;
    }
    strcpy(e,&e[l]);
    printf("%s\n",e);
    return;
}

void StrAdd(char *c,int len)
{
    int i,l,y;


    int f=0,c1=0;
        for(l=0;l<dlen;l++)
        {
            y=d[f]+c[l]-'0'-'0'+c1;
            d[f]=y%10+'0';

            c1=y/10;
            f++;
        }
        for(i=l;i<len;i++)
        {
            y=c[i]-'0'+c1;
            d[f]=y%10+'0';
            c1=y/10;
            f++;
        }
        if(c1)
        {
            d[f]='1';
            dlen=strlen(d);
        }
        else
        {
            d[f]=0;
            dlen=strlen(d);
        }


}


void StrMul(char *a,char *b,int l1,int l2)
{
    int i,j,k,l,carry,x,y,len,f,c1;
    for(i=0;i<1000;i++)
        d[i]='0';

    for(j=l2-1;j>=0;j--)
    {
        k=l2-j-1;
        carry=0;
        if(k>0)
        {
            for(l=0;l<k;l++)
                c[l]='0';
        }
        for(i=l1-1;i>=0;i--)
        {
            x=(a[i]-'0')*(b[j]-'0')+carry;
            c[k]=x%10+'0';

            carry=x/10;
            k++;

        }
        while(carry)
        {
            c[k++]=carry%10+'0';
            carry=carry/10;
        }
        c[k]=0;

        len=strlen(c);
        if(j==l2-1)
            dlen=len;

        StrAdd(c,len);

    }
        StrRev(d);

    return;

}


int main()
{

    while(scanf("%s %s",a,b)!=EOF)
    {

        int len1,len2;
        len1=strlen(a);
        len2=strlen(b);
        if(len1>=len2)
            StrMul(a,b,len1,len2);
        if(len2>len1)
            StrMul(b,a,len2,len1);

    }

    return 0;
}


