#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int t,i,len,j,k;
    char a[10001];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(a);
        len=strlen(a);
        int s=sqrt(len);
        int b=s*s;
        if(len==b)
        {
            for(j=0;j<s;j++)
            {
                for(k=j;k<len;k=k+s)
                {
                    printf("%c",a[k]);
                }
            }
            printf("\n");
        }
        else
            printf("INVALID\n");

    }
    return 0;
}
