#include <stdio.h>
int main()
{
    int i,a[10000];
    a[0]=0;
    a[1]=1;
    for(i=2;i<10000;i++)
    {

        if(i%2==0 || i%3==0 || i%5==0)
            a[i]=i;
        else
            continue;

    }
    printf("%d",a[1500]);

    return 0;
}
