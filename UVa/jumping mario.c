#include <stdio.h>
int main()
{
    int t,i,n,a[51],j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        int h=0,l=0;
        for(j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
                h++;
            else if(a[j]>a[j+1])
                l++;
            else
                continue;
        }
        printf("Case %d: %d %d\n",i,h,l);

    }

    return 0;
}
