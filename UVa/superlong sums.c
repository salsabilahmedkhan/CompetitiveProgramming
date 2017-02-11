#include <stdio.h>
#include <string.h>
int main()
{
    char a[10000],b[10000],l1,l2;
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%c %c",&a[i],&b[i]);
        l1=strlen(a);
        l2=strlen(b);
        printf("%d %d",l1,l2);
    }
    return 0;
}
