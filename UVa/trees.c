#include <stdio.h>
int main()
{
     long long int l,m,m1,m2,m3,i,s1;
    while(scanf("%lld %lld",&l,&m))
    {
        if(l==0 && m==0)
        break;
        s1=l+1;
        long long int s2=0,t=0;

        for(i=1;i<=m;i++)
        {
            scanf("%lld %lld",&m1,&m2);
            m3=m2-m1+1;

            s2=s2+m3;


            t=s1-s2;
        }

            printf("%lld\n",t);

    }
    return 0;
}
