#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[100000000];
int main()
{
    int t,i,j,k,s,l,p,len;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        len=strlen(a);
        p=0;
        printf("Case %d: ",i);
        for(j=0;j<len;j=p+1)
        {
            s=0;
            if(isdigit(a[j]))
            {
                for(k=j;;k++)
                {
                    if(!isdigit(a[k]))
                        break;
                    s=s*10+(a[k]-'0');

                }

                for(l=1;l<=s;l++)
                {
                    printf("%c",a[j-1]);
                }
                p=k-1;
            }
            else
                p=j;

        }
        printf("\n");
    }

    return 0;
}
