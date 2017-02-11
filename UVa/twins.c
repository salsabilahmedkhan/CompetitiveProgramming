#include <stdio.h>


int main()
{
    int n,i,a[10000],j,temp;
    scanf("%d",&n);

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }


        int sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        sum=sum/2;
        int sum1=0,c=0;
        for(i=0;i<n;i++)
        {
            if(sum1>sum)
                break;
            sum1=sum1+a[i];
            c++;
        }
        printf("%d\n",c);

    return 0;
}
