#include <stdio.h>
int main()
{
    long long int n,i;
   while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        int count=0;
            for(i=1;i<=n;i++)
        {
            if(n%i==0)
                count++;
        }
        if(count%2==0)
            printf("no\n");
        else
            printf("yes\n");
    }

    return 0;
}
