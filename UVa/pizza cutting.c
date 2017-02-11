#include <stdio.h>

long long int a[210000001];

void max(long long int n)
{
    int i;
    a[0]=0;
    a[1]=2;
    for(i=2;i<=n;i++)
    {
        a[i]=a[i-1]+i;
    }
    return;

}


int main()
{
   long long int n;
    while(scanf("%lld",&n))
    {
        if(n<0)
            break;

        max(n);
        printf("%d\n",a[n]);

    }
    return 0;
}
