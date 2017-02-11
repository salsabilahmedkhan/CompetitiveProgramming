#include <stdio.h>
int main()
{
    int t,n,a[1000],i,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int m=0,j1=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            for(k=-1;;k=k+30)
            {
                m=m+10;
                if(k>a[j])
                    break;

            }
            for(k=-1;;k=k+60)
            {
                j1=j1+15;
                if(k>a[j])
                    break;

            }
        }
        if(m<j1)
            printf("Case %d: Mile %d\n",i,m);
        else if(m>j1)
            printf("Case %d: Juice %d\n",i,j1);
        else
            printf("Case %d: Mile Juice %d\n",i,m);
    }

    return 0;
}
