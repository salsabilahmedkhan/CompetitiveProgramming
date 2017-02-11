#include <stdio.h>

int main()
{
    int n,f;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        if(n<=100)
            printf("f91(%d) = 91\n",n);
        else if(n>=101)
            printf("f91(%d) = %d\n",n,n-10);
    }
    return 0;
}
