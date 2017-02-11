
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000][1000];
    int t,i,j,k;
    while(scanf("%d",&t)!=EOF)
    {
        if(t==0)
            break;
        for(i=0;i<t;i++)
        {
            scanf("%s",a[i]);
        }
        int max=0;

            for(i=0;i<t;i++)
            {
                int count=0;
                for(j=0;j<t;j++)
                {
                    if(strcmp(a[i],a[j])==0)
                        count++;
                }
                if(count>1 && count>max)
                {
                    max=count;
                    k=i;
                }
            }

                printf("%s\n",a[k]);

        }

    return 0;
}
