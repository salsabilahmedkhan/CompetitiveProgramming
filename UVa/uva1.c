#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    int t,f,l;
    double b,w,r,g;

    scanf("%d",&t);
    for(f=1;f<=t;f++)
        {
        scanf("%d",&l);
        b=l/5.0;
        w=(6.0*l)/10.0;
        g=(l*w)-(pi*(b*b));
        r=(pi*(b*b));
            printf("%0.2lf %0.2lf\n",r,g);
        }

        return 0;
}
