#include <stdio.h>
int main()
{
    long long int t,n,s,i,f,j,e;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        int sum=0;
        scanf("%lld",&f);
        for(j=1;j<=f;j++)
        {
            scanf("%lld %lld %lld",&s,&n,&e);
            sum=sum+(s*e);
        }

        printf("%lld\n",sum);
    }

    return 0;
}
