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
            m=m+(a[j]/30)+1;
            j1=j1+(a[j]/60)+1;
        }
        int m1=m*10;
        int j2=j1*15;
        if(m1<j2)
            printf("Case %d: Mile %d\n",i,m1);
        else if(m1>j2)
            printf("Case %d: Juice %d\n",i,j2);
        else
            printf("Case %d: Mile Juice %d\n",i,m1);
    }

    return 0;
}

