#include <stdio.h>
int main()
{
    int t,i,j,n,a[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        a[0]=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[j]);
        }
        int mid=(n+1)/2;
        printf("Case %d: %d\n",i,a[mid]);
    }

    return 0;
}
