#include <stdio.h>
int main()
{
    int n,i,m,b[1000];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

        for(i=1;i<101;i++)
        {
            b[i]=0;
        }

        for(i=1;i<=n;i++)
        {
            scanf("%d",&m);
            b[m]++;
        }
        int j=0;

        for(i=1;i<101;i++)
        {
            if(b[i]!=0)
            {
                while(b[i]!=0)
                {
                    printf("%d",i);
                    j++;
                    b[i]--;

                    if(j<n)
                        printf(" ");
                }
            }
        }
        printf("\n");

    }

    return 0;
}
