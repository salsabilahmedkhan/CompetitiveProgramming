#include <stdio.h>

double minimum(double a, double b)
{
if ( a < b )
return a;
else
return b;
}

int main()
{
    double a[7],c1,c2,ttl;
    int i,f,t;
    scanf("%d",&t);
    for(f=1;f<=t;f++)
    {
    for(i=0;i<7;i++)
    {
        scanf("%lf",&a[i]);
    }

    double x = minimum(a[4], minimum(a[5],a[6]));
    c1= a[4]+a[5]+a[6]-x;
    c2=c1/2;
    ttl=a[0]+a[1]+a[2]+a[3]+c2;
    if(ttl>=90)
        printf("Case %d: A\n",f);
    else if(ttl>=80)
        printf("Case %d: B\n",f);
    else if(ttl>=70)
        printf("Case %d: C\n",f);
    else if(ttl>=60)
        printf("Case %d: D\n",f);
    else if(ttl<60)
        printf("case %d: F\n",f);

    }
return 0;

}
