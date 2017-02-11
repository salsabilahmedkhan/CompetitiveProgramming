#include <stdio.h>
int main()
{
    int n,a[200],i,j;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

        int s=0,s1=0,s2=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=1;i<=n;i++)
        {
            s=s+a[i];
        }

        s=s/2;

        for(i=1;i<=n;i++)
        {
            s1=s1+a[i];

            if(s1==s)
                break;
        }

        for(j=n;j>=i+1;j--)
        {
            s2=s2+a[j];
        }

        if(s1==s2)
            printf("Sam stops at position %d and Ella stops at position %d.\n",i,i+1);
        else
            printf("No equal partitioning.\n");
    }

    return 0;
}
