#include <stdio.h>
int main()
{
    int t,i,a,b[10000],j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        double sum=0,c=0,c1;
        scanf("%d",&a);
        for(j=0;j<a;j++)
        {
            scanf("%d",&b[j]);
            sum=sum+b[j];
        }

        sum=sum/a;
        for(j=0;j<a;j++)
        {
            if(b[j]>sum)
                c++;
        }
        c1=c/a;
        c1=c1*100;

        printf("%0.3lf%%\n",c1);
    }

    return 0;
}
