#include <stdio.h>
int main()
{
    long long int n,i;
    while(scanf("%d",&n))
    {
        long long int sum=0;
        if(n==0)
            break;
        for(i=n;i>=1;i--)
        {
            sum=sum+(i*i);
        }
        printf("%lld\n",sum);
    }

    return 0;
}
