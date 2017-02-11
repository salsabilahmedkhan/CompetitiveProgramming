#include <stdio.h>
int main()
{
    int t,i,j,k,n,p,a[1000];

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&p);
        for(j=0;j<p;j++)
        {
            scanf("%d",&a[j]);
        }
        int h[3651]={0};


        for(j=0;j<p;j++)
        {
            for(k=1;k<=n;k++)
            {
                if(k%a[j]==0 && k%7!=0 && k%7!=6)
                    h[k]++;
            }
        }

        int c=0;
        for(j=1;j<=n;j++)
        {
            if(h[j]!=0)
                c++;
        }

        printf("%d\n",c);

    }

    return 0;
}
