#include <stdio.h>
int main()
{
    int i,t,n,x[150],j,k,sum1,temp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int sum=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[j]);
        }

        for(j=0;j<n-1;j++)
        {
            for(k=0;k<n-j-1;k++)
            {
                if(x[k]>x[k+1])
                {
                    temp=x[k];
                    x[k]=x[k+1];
                    x[k+1]=temp;
                }
            }
        }

        for(j=0;j<n-1;j++)
        {
            sum=sum+(x[j+1]-x[j]);

        }

        sum1=sum+sum;

        printf("%d\n",sum1);
    }

    return 0;
}
