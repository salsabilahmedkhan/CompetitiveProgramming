#include <stdio.h>
int main()
{
    int t,i,r,x1,x2,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&r);
        x1=-(45*5*r)/100;

        x2=(55*5*r)/100;

        y=(3*r)/2;

        printf("Case %d:\n",i);
        printf("%d %d\n",x1,y);
        printf("%d %d\n",x2,y);
        printf("%d %d\n",x2,-y);
        printf("%d %d\n",x1,-y);


    }
    return 0;
}
