#include <stdio.h>
int main()
{
    int t,i,a,f,j,k,l,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&f);
        for(j=1;j<=f;j++)
        {
            for(k=1;k<=a;k++)
            {
                l=k;
                for(m=k;l>=1;l--)
                {
                    printf("%d",m);
                }
                printf("\n");
            }
            for(k=m-1;k>=1;k--)
            {
                l=k;
                for(m=k;l>=1;l--)
                {
                    printf("%d",m);
                }
                printf("\n");
            }

            if(j<f)
                printf("\n");
        }
        if(i<t)
            printf("\n");

    }

    return 0;
}
