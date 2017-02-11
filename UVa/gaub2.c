#include <stdio.h>
long long int sum(long long int a,long long int b)
{
    int i;
    long long int n=0,m=0,sum;
    for(i=1;i<=b;i++)
    {
        m++;
    }
    if(a>0)
    {
        for(i=1;i<a;i++)
            n++;
    }
    else if(a<0)
    {
        for(i=a;i<1;i++)
            n++;
    }
    sum=((m*(m+1))/2)-(((n-1)*(n-1+1))/2);

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

