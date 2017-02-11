#include <stdio.h>

long long int sum(long long int a)
{
    long long int b,i;

    b=a%10;

    for(i=a;a/10;i++)
    {
        a=a/10;
        b=b+a%10;

    }
    return b;
}
int main()
{
    long long int c,a,i;
    while(scanf("%lld",&a))
    {
        if(a==0)
            return 0;

    for(i=a;i>9;i=sum(i));

    printf("%lld\n",i);

    }
    return 0;
}
