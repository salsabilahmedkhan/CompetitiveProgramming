#include <stdio.h>
long long int sum(long long int a,long long int b)
{
    int i;
    long long int sum=0;
    for(i=a;i<=b;i++)
    {
        sum=sum+i;
    }

    return sum;
}


int main()
{
    int t,i;
    long long int m,n,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&m);

        a=sum(n,m);

        printf("Scenario #%d:\n%lld\n",i,a);

    }


    return 0;
}

