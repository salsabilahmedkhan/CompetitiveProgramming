#include <stdio.h>
int main()
{
    int n,ip,a[10000],i;
    scanf("%d %d",&n,&ip);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ip1=ip;
    for(i=0;i<n;i++)
    {
        if(a[i]<ip1)
        {
            ip1=ip1+1;
        }
        else
        {
            ip1=ip1+2;
        }
    }

    printf("%d\n",ip1);

return 0;

}
