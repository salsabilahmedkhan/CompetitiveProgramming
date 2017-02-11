#include<stdio.h>
int main()
{
    long int a,b,t,i,x,y;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld",&a,&b);
        if((a>=b) && ((a+b)%2==0) && ((a-b)%2==0))
        {
            x=(a+b)/2;
            y=(a-b)/2;
            printf("%ld %ld\n",x,y);
        }

        else
        {
            printf("impossible\n");
        }

    }

    return 0;

}

