#include <stdio.h>
int main()
{
    int t,a[7],i,b[3],temp,c,ttl,f;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(f=1;f<=t;f++)
    {
        b[0]=a[4];
        b[1]=a[5];
        b[2]=a[6];
        for(i=0;i<4;i++)
        {
            if(b[i+1]>b[i])
            {
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }

        c=(b[0]+b[1])/2;
        ttl=a[0]+a[1]+a[2]+a[3]+c;

            if(ttl>=90)
                printf("Case %d: A\n",f);
            if(ttl>=80 && ttl<90)
                printf("Case %d: B\n",f);
            if(ttl>=70 && ttl<80);
            printf("Case %d: C\n",f);
            if(ttl>=60 && ttl<70)
                printf("Case %d: D\n",f);
            if(ttl<60);
            printf("Case %d: F\n",f);
    }
return 0;

}
