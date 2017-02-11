#include <stdio.h>
#include <string.h>
int main()
{
    char p[10000];
    int n,j,k;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%s",p);
        int len;
        len=strlen(p);
        int m=0,r=0,a=0,g=0,i=0,t=0;
        for(k=0;k<len;k++)
        {
            if(p[k]=='M')
                m++;
            else if(p[k]=='A')
                a++;
            else if(p[k]=='R')
                r++;
            else if(p[k]=='G')
                g++;
            else if(p[k]=='I')
                i++;
            else if(p[k]=='T')
                t++;
        }
        int c1,c2,min;
        c1=a/3;
        c2=r/2;
        if(c1<c2) min=c1;
        else min=c2;
        if((m-min)>=0 && (g-min)>=0 && (i-min>=0) && (t-min)>=0)
            printf("%d\n",min);
        else
            printf("0\n");

    }

    return 0;
}

