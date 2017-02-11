#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

char a[100000000],b[100000000];
unsigned long long int rem;

void StrMod(char *a,int n)
{
    int i,len,j,len2;
    rem=0;
    len=strlen(a);
    for(i=0,j=0;i<len;i++,j++)
    {
        rem=rem*10+a[i]-'0';
        b[j]=rem/n+'0';
        rem=rem%n;
    }
    b[j]=0;
    len2=strlen(b);
    for(j=0;j<len2-1;j++)
    {
        if(b[j]!='0')
            break;
    }
    strcpy(b,&b[j]);

    //printf("%d\n",rem);
    //printf("quo: %d\n",quo);

    return;
}


int main()
{
    char m;
    int n,i;
    while(scanf("%s %c %d",a,&m,&n)!=EOF)
    {
        StrMod(a,n);
        if(m=='/')
            printf("%s\n",b);
        else if(m=='%')
            printf("%llu\n",rem);

    }


    return 0;
}


