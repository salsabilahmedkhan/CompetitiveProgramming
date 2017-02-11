#include <stdio.h>
int main()
{
    int t,i,a[10000],s;
    while(scanf("%d",&t)!=EOF)
    {

        if(t==0)
            break;
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
        }

        s=(a[0]*6)+5;
        if(t==1)
            printf("%d\n",s);
        else
        {
            for(i=1;i<t;i++)
            {
                if(a[i]>a[i-1])
                {
                    s=s+(((a[i]-a[i-1])*6)+5);
                }
                else
                {
                    s=s+(((a[i-1]-a[i])*4)+5);
                }
            }

            printf("%d\n",s);
        }
    }

    return 0;
}
