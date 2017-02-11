#include <stdio.h>
#include <math.h>

int main()
{
    int n,k,i,a[1000];
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        double c;
        for(i=0;i<n*2;i+=2)
        {
            scanf("%d %d",&a[i],&a[i+1]);
        }
        double s=0;
        for(i=0;i<(n*2)-2;i+=2)
        {
            c=(a[i+3]-a[i+1])*(a[i+3]-a[i+1])+(a[i+2]-a[i])*(a[i+2]-a[i]);
            c=sqrt(c);
            s=s+c;
        }
        s=s*k;
        s=s/50;

        printf("%0.9lf\n",s);
    }

    return 0;
}
