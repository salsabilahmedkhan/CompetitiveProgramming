#include <stdio.h>
int main()
{
    int t,i;
    double c,d,c1;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf",&c,&d);
        c1=((5*d)/9)+c;
        printf("Case %d: %0.2lf\n",i,c1);

    }
    return 0;
}
