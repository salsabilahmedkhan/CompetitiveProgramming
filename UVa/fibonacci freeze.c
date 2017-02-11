#include <stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        int a[10000];
        a[0]=0;
        a[1]=1;
        a[2]=1;
        for(i=3;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }

        printf("The Fibonacci number for %d is %d\n",n,a[n]);
    }

    return 0;
}
