#include <stdio.h>
int main()
{
    int a,b,c,d,temp;
    while(scanf("%d %d",&a,&b))
    {
        if(a==-1 && b==-1)
            break;
        if(a>b)
            {
                temp=a;
                a=b;
                b=temp;
            }

        c=b-a;
        d=(a-0)+(100-b);

        if(c<d)
            printf("%d\n",c);
        else
            printf("%d\n",d);
    }

    return 0;
}
