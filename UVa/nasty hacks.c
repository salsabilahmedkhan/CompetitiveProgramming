#include <stdio.h>
int main()
{
    int t,i,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d %d %d",&a,&b,&c);
    if(a>b-c)
        printf("do not advertise\n");
    else if(a<b-c)
        printf("advertise\n");
    else
        printf("does not matter\n");

    }
    return 0;
}
