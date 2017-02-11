#include <stdio.h>

int b[3];

int minimum(int b[],int c[])
{
    int min;
    min=b[0];
    if(b[0]<min)
    {
        min=b[0];
    }
    return min;
}
int main()
{
    int t,a[7],i,b[3],temp,ttl,f;
    double c;

    for(f=0;f<7;f++)
    {
        scanf("%d",&a[f]);
    }

        b[0]=a[4];
        b[1]=a[5];
        b[2]=a[6];
        t=minimum(b[0],minimum(b[1],b[2]));
        for(i=0;i<3;i++)
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
                printf("A\n");
            else if(ttl>=80)
                printf("B\n");
            else if(ttl>=70)
                printf("C\n");
            else if(ttl>=60)
                printf("D\n");
            else if(ttl<60)
                printf("F\n");

return 0;

}
