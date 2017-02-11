#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int t,i,j,k;
    char a[1000];
    int b[150]={};
    scanf("%d\n",&t);
    for(i=1;i<=t;i++)
    {
        gets(a);
        int len=strlen(a);
        for(j=0;j<len;j++)
        {
            if(a[j]>='a' && a[j]<='z')
            {
                b[a[j]]++;
            }
            else if(a[j]>='A' && a[j]<='Z')
            {
                b[a[j]+32]++;
            }
        }
    }

    int c;
    for(k=0;k<26;k++)
    {
        int max=0;

        for(j=0;j<150;j++)
        {
            if(b[j]>max)
            {
                max=b[j];
                c=j;
            }

        }
        b[c]=0;
        if(max!=0)
            printf("%c %d\n",toupper(c),max);
    }

    return 0;
}
