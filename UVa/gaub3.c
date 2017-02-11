#include <stdio.h>




int main()
{
    int t,i;
    long long int m,n,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&m);

        a=((m*(m+1))/2)-(((n-1)*(n-1+1))/2);


        printf("Scenario #%d:\n%lld\n",i,a);
        printf("\n");

    }


    return 0;
}

