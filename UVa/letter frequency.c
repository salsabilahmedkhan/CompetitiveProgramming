
#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,j,len;
    char a[201];

    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(a);
        len=strlen(a);
        int b[150]={};
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
        int max=0;
        for(j=0;j<150;j++)
        {
            if(b[j]>max)
            {
                max=b[j];
            }
        }

        for(j=0;j<150;j++)
        {
            if(max==b[j])
                printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
