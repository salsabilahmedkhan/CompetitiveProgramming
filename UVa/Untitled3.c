#include <stdio.h>
void sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if ( a[j] > a[j+1] )
                {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                }
        }
    }
}
int main()
{
    int t,a[7],i,b[3],temp,ttl,f,j;
    double c;
    scanf("%d",&t);
    for(f=1;f<=t;f++)
    {

    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }

        b[0]=a[4];
        b[1]=a[5];
        b[2]=a[6];
        sort(b,3);
        c=(b[1]+b[2])/2;

        ttl=a[0]+a[1]+a[2]+a[3]+c;

            if(ttl>=90)
                printf("Case %d: A\n",f);
            if(ttl>=80 && ttl<90)
                printf("Case %d: B\n",f);
            if(ttl>=70 && ttl<80)
                printf("Case %d: C\n",f);
            if(ttl>=60 && ttl<70)
                printf("Case %d: D\n",f);
            if(ttl<60)
                printf("Case %d: F\n",f);
    }
return 0;

}

