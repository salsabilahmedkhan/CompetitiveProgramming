#include <stdio.h>
int main()
{
    int n,a[1002],i,j;
    while(scanf("%d",&n)!=EOF)
    {
        int c=0;
        for(i=0;i<n;i++)
        {
            int sum=0;
            for(j=0;j<3;j++)
            {
                scanf("%d",&a[j]);
                sum=sum+a[j];
            }
            if(sum>=2)
                c++;
        }

        printf("%d\n",c);

    }

    return 0;

}
