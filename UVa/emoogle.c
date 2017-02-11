#include <stdio.h>
int main()
{
    int t,i,a[10000],eb,x=0;
    while(scanf("%d",&t)!=EOF)
    {
        int c1=0,c2=0;
        x++;
        if(t==0)
            break;
        else
        {
            for(i=0;i<t;i++)
            {
                scanf("%d",&a[i]);
            }
            for(i=0;i<t;i++)
            {
                if(a[i]>0 && a[i]<100)
                    c1++;
                else if(a[i]==0)
                    c2++;
            }

            eb=c1-c2;

            printf("Case %d: %d\n",x,eb);
        }
    }

    return 0;
}
