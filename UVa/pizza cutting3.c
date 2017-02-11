#include<stdio.h>
int main()
{
    long long int a,b;

    while(scanf("%lld",&a))
    {
        if(a<0)
            break;
        b=a*(a+1);
        b=b/2;
        b=b-(a-1);
        b=b+a;
        printf("%lld\n",b);
    }

    return 0;
}
