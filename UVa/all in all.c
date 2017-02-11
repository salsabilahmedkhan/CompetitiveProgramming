#include <stdio.h>
#include <string.h>
#include <ctype.h>
char a[100000000],b[100000000];
int main()
{

    int i,j;
    while(scanf("%s %s",a,b)!=EOF)
    {
        int l1,l2,p=0,f=0;
        l1=strlen(a);
        l2=strlen(b);
        for(i=0;i<l1;i++)
        {
            for(j=p;j<l2;j++)
            {
                {
                    if(b[j]==a[i])
                    {
                        f++;
                        p=j+1;
                        break;
                    }

                }
            }
        }

        if(f==l1)
            printf("Yes\n");
        else
            printf("No\n");


    }

    return 0;
}
