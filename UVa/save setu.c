#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    long long int t,n,i,sum=0;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);

        if(a[0]=='d')
        {
            scanf("%lld",&n);
            sum=sum+n;
        }
        else if(a[0]=='r')
            printf("%lld\n",sum);
    }

    return 0;
}
