#include <stdio.h>


int main()
{
    long long int a,b,c,d[10],temp,i,j,e,f;
    while(scanf("%lld %lld %lld",&c,&a,&b))
    {
        if(a==0 && b==0 && c==0)
            break;

        d[0]=a;
        d[1]=b;
        d[2]=c;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3-i-1;j++)
            {
                if(d[j]<d[j+1])
                {
                    temp=d[j];
                    d[j]=d[j+1];
                    d[j+1]=temp;
                }
            }
        }
        e=d[0]*d[0];
        f=d[1]*d[1]+d[2]*d[2];
        if(e==f)
            printf("right\n");
        else if(e!=f)
            printf("wrong\n");

    }

    return 0;
}
