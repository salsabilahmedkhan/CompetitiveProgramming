#include <stdio.h>
int main()
{
    int t,i,n,k,p,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        s=k+p;
        while(s>n)
            s=s-n;

        printf("Case %d: %d\n",i,s);
    }

    return 0;
}
