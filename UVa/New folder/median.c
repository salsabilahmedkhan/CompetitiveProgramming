
#include <stdio.h>
#include <math.h>

#define eps 1e-9
int main()
{
    double m1,m2,m3,n,s,a;
    while(scanf("%lf %lf %lf",&m1,&m2,&m3)==3)
    {

        s = (m1+m2+m3)/2.0;
    n = sqrt(s * (s-m1) * (s-m2) * (s-m3));
    a = 4 * n/3;
    if(a<=0)
    {
        a = -1.0;
    }
        printf("%.3lf\n",a+eps);
    }

    return 0;
}
