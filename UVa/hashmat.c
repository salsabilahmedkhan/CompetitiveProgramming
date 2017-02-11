#include <stdio.h>
int main()
{
    unsigned long long int a,b;
    while(scanf("%llu %llu",&a,&b)!=EOF)
    {
        if(a<b)
        {
            printf("%llu\n",b-a);
        }
        else
        {
            printf("%llu\n",a-b);
        }
    }
    return 0;
}
