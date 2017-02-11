#include <stdio.h>
int main()
{
    int t,n,s,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        scanf("%d",&n);

        s=n*567;
        s=s/9;
        s=s+7492;
        s=s*235;
        s=s/47;
        s=s-498;
        s=s/10;
        s=s%10;
        if(s<0)
            s=s*(-1);
        printf("%d\n",s);
    }

    return 0;

}
